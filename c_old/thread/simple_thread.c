#include<stdio.h>
#include<pthread.h>
int counter=0;
pthread_mutex_t lock;
pthread_cond_t cond;
int turn=1;
void* even(void *arg)
{
	while(counter < 10)
	{
	pthread_mutex_lock(&lock);
	while(turn != 1)
		pthread_cond_wait(&cond,&lock);
	if(counter <10 && (counter&1)==0)
	{
		printf("even : %d\n",counter++);
		turn=2;
		pthread_cond_signal(&cond);
	}
	
	pthread_mutex_unlock(&lock);
	}
	return NULL;
}

void* odd(void *arg)
{
	while(counter < 10)
	{
	pthread_mutex_lock(&lock);
	while(turn != 2)	
	pthread_cond_wait(&cond,&lock);
	
	if(counter <10 && (counter&1)!=0)
	{
		printf("odd : %d\n",counter++);
		turn=1;
		pthread_cond_signal(&cond);
	}
	
	pthread_mutex_unlock(&lock);
	}
	return NULL;
}




int main()
{
	pthread_t pEven,pOdd;

	pthread_create(&pEven,NULL,even,NULL);
	pthread_create(&pOdd,NULL,odd,NULL);

	pthread_join(pEven,NULL);
	pthread_join(pOdd,NULL);
	return 0;
}
