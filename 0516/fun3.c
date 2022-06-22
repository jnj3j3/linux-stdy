#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

char* checkFile(FILE* fp,int line,char* word){
	
        char buffer[MAX] = {0,};
        fread(buffer,1,MAX,fp);
        char *ptr = strtok(buffer,"\n");

        for(int i=1;i<line;i++){
		if(ptr==NULL){
			return "line error";
}
                ptr = strtok(NULL,"\n");
	
}
        if(strstr(ptr,word)!=NULL) return strtok(ptr,word);
        else	return "can't find";

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
