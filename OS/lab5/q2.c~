#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char *argv[]){
	int pid, i, j;
	char name[10];
	printf("\n entered strings");
	for(i=1; i<argc; i++){
		printf("\n %s", argv[i]);
		name[i] = argv[i];
	}	
	int n = argc;
	char temp[10];
	for (i = 0; i < n - 1 ; i++){
        for (j = i + 1; j < n; j++){
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
	printf("\n sorted strings");
	for(i=1; i<argc; i++){
		printf("\n %s", name[i]);
	}
	
printf("\n");
return 1;
}


