#include<stdio.h>
#include<pthread.h>
#define MAX 10
pthread_mutex_t lock= PTHREAD_MUTEX_INITIALIZER;
int counter =0;
void* even(void* arg)
{
	while(1)
	{
		pthread_mutex_lock(&lock);	
		if(counter>MAX)
		{
			pthread_mutex_unlock(&lock);
			break;
		}
		else if(counter%2==0)
			printf("even %d \n ",counter++);
	

	pthread_mutex_unlock(&lock);
	}
	return NULL;

}

void* odd(void* arg)
{
        while(1)
        {
                pthread_mutex_lock(&lock);
                if(counter>MAX)
                {
                        pthread_mutex_unlock(&lock);
                        break;
                }
                else if(counter%2!=0)
                        printf("odd %d \n",counter++);
        pthread_mutex_unlock(&lock);
	}
	return NULL;

}


int main()
{
	pthread_t p1,p2;

	pthread_create(&p1,NULL,even,NULL);
	pthread_create(&p2,NULL,odd,NULL);

	pthread_join(p1,NULL);
	pthread_join(p2,NULL);

	pthread_mutex_destroy(&lock);
}
