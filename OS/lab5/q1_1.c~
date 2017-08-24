#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	int pid;
	int status;
	pid = fork();
	if(pid==-1){
	printf("Not valid");	
	}
	if(pid == 0){
	
	printf("Child Process: PID: %d | PPID: %d \n", getpid(), getppid());
	}
	else{
	wait(&status);
	printf("Parent Process: PID: %d | PPID: %d \n", getpid(), getppid());	
	}
	return 1;
}
