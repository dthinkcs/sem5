#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	int pid;
	
	pid = fork();
	if(pid == -1){
		printf("\n error");	
	}if(pid == 0){
		printf("this is child process : PID: %d : PPID: %d \n ",getpid(), getppid());
	}else{
		printf("this is parent process : PID: %d  : PPID: %d \n",getpid(), getppid());
	}
return 1;

}
