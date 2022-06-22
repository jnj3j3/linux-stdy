#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

void checkFile(FILE* fp){
        char buffer[MAX] = {0,};
        fread(buffer,1,MAX,fp);
        char *ptr = strtok(buffer,"\n");

        ptr = strtok(NULL,"\n");

        if(strstr(ptr,"option")!=NULL) printf("%s \n",strtok(ptr,"option"));
        else printf("can't find\n");

}

int main(int argc,char *argv[]){
        printf("txt이름\n");

        char *txt= (char*)malloc(sizeof(char)*10);

        scanf("%s",txt);

        FILE* fp = fopen(txt,"r");

        checkFile(fp);

        fclose(fp);

}
