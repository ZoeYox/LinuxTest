#include "my.h"
int main (){
	int ret;
	printf("caller:pid=%d,ppid=%d\n",getpid(),getppid());
	ret =system("./test1 123 445 hello world");
	printf("After calling!\n");
 	sleep(100);
	return 0;
}
