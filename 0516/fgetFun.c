#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 1000

char* checkFile(FILE* fp,int line,char* word){
	char *ptr;
        char li[MAX];
        
	for(int i=0;i<line;i++)
		if((ptr=fgets(li,MAX,fp))==NULL)
			return "line error";

        if(strstr(ptr,word)!=NULL) return strtok(ptr,word);
        else    return "can't find";

}

int main(int argc,char *argv[]){
        printf("txt이름 / 찾을 라인 / 찾을 문자열\n");

        char *txt= (char*)malloc(sizeof(char)*10);
        char *word= (char*)malloc(sizeof(char)*10);
        int line;

        scanf("%s %d %s",txt,&line,word);

        FILE* fp = fopen(txt,"r");
        if(!fp){
                printf("fileName error\n");
                free(txt);
                free(word);
                return -1;

}


        printf("%s\n",checkFile(fp,line,word));
        free(txt);
        free(word);

        fclose(fp);

}
