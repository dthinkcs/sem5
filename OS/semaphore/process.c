#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(){
pid_t firstChild, secondChild;
int status;
firstChild = fork();
if(firstChild > 0)
{
  // In parent
	printf("in parent\n");
	wait(&status);
	printf("LAST LINE");


}
else if(firstChild < 0 )
{
  // Error
} 
else
{
  printf("first child \n");
  exit(status);
}

}
