#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

volatile int running_threads = 0;
pthread_mutex_t running_mutex = PTHREAD_MUTEX_INITIALIZER;

void * threadStart()
{
   // do the thread work
   pthread_mutex_lock(&running_mutex);
   running_threads--;
   printf("inside function \n");
   pthread_mutex_unlock(&running_mutex);
}

int main()
{
	int i, num_threads = 3;
  for (i = 0; i < num_threads;i++)
  {
     pthread_mutex_lock(&running_mutex);
     running_threads++;
     pthread_mutex_unlock(&running_mutex);
     // launch thread

  }

  while (running_threads > 0)
  {
     sleep(1);
  }
}
