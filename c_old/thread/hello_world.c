#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void* hello(void* arg)
{
	printf("hello ");
	return NULL;
}

void* world(void* arg)
{
	printf("world");
	return NULL;
}

int main()
{
	pthread_t hello_t,world_t;

	pthread_create(&hello_t,NULL,hello,NULL);
	pthread_create(&world_t,NULL,world,NULL);

	pthread_join(hello_t,NULL);
	pthread_join(world_t,NULL);
return 0;
}
