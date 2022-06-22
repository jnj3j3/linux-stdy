#include<stdio.h>
#include<unistd.h>

int main(){
        int pid;
        printf("[%d] 프로세스 시작\n",getpid());
        pid = fork();
        printf("[%d]프로세스 리턴값 %d\n",getpid(),pid);
	for(int i = 0;i<10;i++){
		printf("%d\n",i);
}
}
