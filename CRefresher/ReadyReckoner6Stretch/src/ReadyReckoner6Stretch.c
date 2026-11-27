//Problem 4:Append Mode
/*
#include<stdio.h>

int main(){
	FILE *fp=fopen("log.txt","w");
	if(fp==NULL){
		printf("Unable to open file for writing");
		return 1;
	}
	fprintf(fp,"Entry 1\n");
	fclose(fp);

	FILE *fp2=fopen("log.txt","a");
	if(fp2==NULL){
		printf("Unable to open file for appending");
		return 1;
	}
	fprintf(fp2,"Entry 2");
	fclose(fp2);

	FILE *fp3=fopen("log.txt","r");
	if(fp3==NULL){
		printf("Unable to open file for reading");
		return 1;
	}
	char line[50];
	while(fgets(line,sizeof(line),fp3)!=NULL){
		printf("%s",line);
	}
	return 0;
}
*/

//Problem 5:File Error Handling
/*
#include<stdio.h>

int main(){
	FILE *fp=fopen("read.txt","r");
	if(fp==NULL){
		printf("Could Not Open File: it does not exist");
		return 1;
	}
	char line[50];
		while(fgets(line,sizeof(line),fp)!=NULL){
			printf("%s",line);
		}
		return 0;
}
*/

//Problem 6:Preprocessor Constants for File I/O
/*
#include<stdio.h>
#define MAX_LINE 32
#define DATA_FILE "data.txt"

int main(){
	FILE *fp=fopen(DATA_FILE,"w");
	if(fp==NULL){
		printf("Unable to open file for writing");
		return 1;
	}
	fprintf(fp,"Config loaded\n");
	fclose(fp);

	char buffer[MAX_LINE];
	FILE *fp2=fopen(DATA_FILE,"r");
	if(fp==NULL){
		printf("Unable to open file for reading");
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),fp2)!=NULL){
		printf("Read: %s",buffer);
	}
	printf("MAX_LINE=%d",MAX_LINE);
}
*/
