#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
int x = 100;
pid_t pid = fork();
if(pid < 0) {
	perror("Fork Failed");
} 
if(pid == 0) {
  x = x + 1;
	printf("The number in child process is equal to: %d\n", x);
}
if(pid > 0) {
  x = x + 10;
	printf("The number in parent process is equal to: %d\n", x);
}
printf("The number after all is equal to: %d\n", x);
	return 0;
}