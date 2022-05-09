#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
int main(int argc,char *argv[]){
        if(argc<2){
                printf("잘못된 사용법입니다.");
                exit(1);
        }
        FILE* fp = fopen(argv[1],"r");
        char buffer[MAX] ={0,};
        fread(buffer,1,MAX,fp);
	char *ptr = strtok(buffer,"\n");
	ptr = strtok(NULL,"\n");	
        while(ptr!=NULL){
		if(strstr(ptr,"option")!=NULL){
			printf("%s \n",strtok(ptr,"option"));
			break;
}
		else{
			ptr=strtok(NULL,"\n");
		}
	}
	fclose(fp);

}
