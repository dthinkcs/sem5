#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *mythfunc(){
	sleep(1);
	printf("inside thread \n");
	return NULL;
}

int main(){
	pthread_t tid;
	printf("Before thread\n");
	pthread_create(&tid, NULL, mythfunc, NULL);
	pthread_join(tid, NULL);
	printf("After thread \n");
	exit(0);
}