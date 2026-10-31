//File Handling
/*
#include<stdio.h>

int main(void){
	FILE *fp=fopen("notes.txt","w");
	if(fp==NULL){
		printf("Unable to open file for writing\n");
		return 1;
	}
	fprintf(fp,"Reading:23.1\n");
	fprintf(fp,"Reading 25.7\n");
	fclose(fp);

	FILE *fp2=fopen("notes.txt","r");
	if(fp2==NULL){
		printf("Unable to open file for reading\n");
		return 1;
	}
	char line[100];
			  while(fgets(line,sizeof(line),fp2)!=NULL){
				  printf("%s ",line);
			  }
			  fclose(fp2);
			  return 0;
}
*/

//Console I/O functions
/*
#include<stdio.h>

int main(void){
	char word[]="Hi";
	printf("Printing word using putchar: ");
	for(int i=0;word[i]!='\0';i++){
		putchar(word[i]);
	}
    printf("\n");
	printf("Reading a character with getchar: ");
	char ch=getchar();
	putchar(ch);
	return 0;
}
*/

//Stream I/O Functions
/*
#include<stdio.h>
int id;
float value;
int main(void){
	FILE *fp=fopen("readings.txt","w");
	fprintf(fp,"%d,%.1f\n",1,23.4);
	fprintf(fp,"%d,%.1f",2,24.1);
	fclose(fp);

	FILE *fp2=fopen("readings.txt","r");
	while(fscanf(fp,"%d,%f",&id,&value)==2){
		printf("id: %d, value: %.1f\n",id,value);
	}

	if(feof(fp2)){
		printf("Reached end of file cleanly\n");
	}
	fclose(fp2);
	return 0;
}
*/

//Problem 1:Basic file read and write
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp1 = fopen("greeting.txt", "w");
    if (fp1 == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }


    fprintf(fp1, "Hello, file!");


    fclose(fp1);


    FILE *fp2 = fopen("greeting.txt", "r");
    if (fp2 == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }


    char line[50];
    if (fgets(line, sizeof(line), fp2) != NULL) {

        printf("File contains: %s\n", line);
    }


    fclose(fp2);

    return 0;
}
*/

//Problem 2:Safe Console Input
/*
#include <stdio.h>

int main() {
    char name[10];

    printf("Enter your name: ");
    fflush(stdout);
    if (fgets(name, sizeof(name), stdin) != NULL) {
        for (int i = 0; i < 10; i++) {
            if (name[i] == '\n') {
                name[i] = '\0';
                break;
            }
        }
        printf("Hello, %s!\n", name);
    }

    return 0;
}
*/

//Problem 3:Counting Lines in a file
/*
#include<stdio.h>
int main(){
	int count=0;
FILE *fp=fopen("poem.txt","w");
if(fp == NULL){
	printf("Unable to open file for reading");
	return 1;
}
fprintf(fp,"Twinkle twinkle little star\n");
fprintf(fp,"How I wonder what you are\n");
fprintf(fp,"Up Above the world so high\n");
fclose(fp);

char line[100];
FILE *fp2=fopen("poem.txt","r");
if(fp2==NULL){
	printf("Unable to open file for reading");
	return 1;
}
while(fgets(line,sizeof(line),fp2)!=NULL){
	printf("%s\n",line);
	count++;

}
printf("Number of lines: %d",count);

}
*/

#include <stdio.h>
#define LOG_FILE "app.log"
#define BUFFER_SIZE 64

#ifdef VERBOSEE_LOGGING
#define LOG(msg) fprintf(fp, "[VERBOSE] %s\n", msg)
#else
#define LOG(msg) fprintf(fp, "%s\n", msg)
#endif

int main() {
	char buffer[BUFFER_SIZE];
	FILE *fp = fopen(LOG_FILE, "w");
	LOG("Startup complete");
	snprintf(buffer, BUFFER_SIZE, "Buffer size available: %d bytes", BUFFER_SIZE);
	LOG(buffer);
	fclose(fp);

	fp = fopen(LOG_FILE, "r");
	char line[BUFFER_SIZE];
	while (fgets(line, sizeof(line), fp) != NULL) {
		printf("%s", line);
	}
	fclose(fp);
	return 0;
}
