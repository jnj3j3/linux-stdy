#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main(int argc,char *argv[]){
	int fd,id;
	if(argc<2){
		printf("잘못된 사용법입니다.");
		exit(1);
	}
	FILE* fp = fopen(argv[1],"r");
	char buffer[MAX] ={0,};
	fread(buffer,1,MAX,fp);
	printf("%s",buffer);
	fclose(fp);
	
}
