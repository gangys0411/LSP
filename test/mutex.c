#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;

pthread_mutex_lock(&mutex);

//크리티컬 섹션

pthread_mutex_unlock(&mutex);
