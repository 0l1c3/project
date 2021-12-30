#ifndef _THREADPOOL_H_
#define _THREADPOOL_H_

typedef struct threadpool_t threadpool_t;

threadpool_t *threadpool_create(int thread_count, int queue_size);

int threadpool_add(threadpool_t *pool, void(*routine)(void *));

int threadpool_destroy(threadpool_t *pool);

#endif