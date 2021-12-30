#define THREAD 8
#define QUEUE 256

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "thread_pool.h"


int tasks = 0, done = 0;
pthread_mutex_t lock;

int randfibsum()
{
	pthread_mutex_lock(&lock);

	int m = rand();
	int fib = 0, fib1= 1, fib2, sum = 0;

	for(int i = 2; i < m; ++i)
	{
		fib2 = fib + fib1;

		sum = sum + fib2;
		fib = fib1;
		fib1 = fib2;
	}
		

	pthread_mutex_unlock(&lock);

	return sum;
	
}


int //function()
{
	pthread_mutex_lock(&lock);

	pthread_mutex_unlock(&lock);

}

int //function()
{
	pthread_mutex_lock(&lock);


	pthread_mutex_unlock(&lock);


}
int main()
{
	threadpool_t* pool;

    pthread_mutex_init(&lock, NULL);

    if((pool = threadpool_create(THREAD, QUEUE)) == NULL)
        return 0;
}