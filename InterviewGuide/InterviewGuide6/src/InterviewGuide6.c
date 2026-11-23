//Problem 1:
/*
#include<stdio.h>

int main(){
	FILE *fp=fopen("dest.txt","w");
	if(fp==NULL){
		printf("Failed to open file for writing");
		return 1;
	}
	fprintf(fp,"Line one");
	fprintf(fp,"Line two");
	fprintf(fp,"Line three");
	fclose(fp);

	FILE *fp2=fopen("dest.txt","r");
	if(fp2==NULL){
		printf("Failed to open file for reading");
		return 1;
	}


	FILE *fp3=fopen("copy.txt","w");
	if(fp3==NULL){
		printf("Failed to open file for writing");
		return 1;
	}
	char line[100];
	while(fgets(line,sizeof(line),fp2)!=NULL){
		fprintf(fp3,"%s",line);
	}
	fclose(fp2);
	fclose(fp3);

	FILE *fp4=fopen("copy.txt","r");
	if(fp4==NULL){
		printf("Failed to open file for reading");
		return 1;
	}
	char line1[100];
	while(fgets(line1,sizeof(line1),fp4)!=NULL){
		printf("%s: ",line1);
	}
}
*/

//Problem 2:Count Characters,Words and Lines in a file
/*
#include <stdio.h>
#include <ctype.h>


int main() {

    FILE *fp = fopen("input.txt", "r");


    if (fp == NULL) {
        printf("Failed to open file for reading\n");
        return 1;
    }

    int ch;
    long characters = 0;
    long words = 0;
    long lines = 0;



    while ((ch = fgetc(fp)) != EOF) {
        characters++;


        if (ch == '\n') {
            lines++;
        }


        if (isspace(ch)) {
            words++;
        }

    }

    fclose(fp);


    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}
*/

//Problem 3:
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char target = '-';
    char replace = '/';
    int ch;

    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch == target) {
            fputc(replace, outputFile);
        } else {
            fputc(ch, outputFile);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("After replacing '%c' with '%c':\n", target, replace);

    outputFile = fopen("output.txt", "r");
    if (outputFile != NULL) {
        while ((ch = fgetc(outputFile)) != EOF) {
            putchar(ch);
        }
        fclose(outputFile);
    }

    return 0;
}
*/

//Problem 4
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "counter.txt";
    FILE *file = fopen(filename, "r");
    int count = 0;

    if (file != NULL) {
        fscanf(file, "%d", &count);
        fclose(file);
    }

    count++;

    printf("This program has now run %d time(s)\n", count);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error saving count.\n");
        return 1;
    }

    fprintf(file, "%d", count);
    fclose(file);

    return 0;
}*/


//Problem 6
/*
#include <stdio.h>
#include <stdbool.h>

bool file_exists(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fclose(file);
        return true;
    }
    return false;
}

int main() {
    const char *file1 = "real_file.txt";
    const char *file2 = "ghost_file.txt";

    FILE *temp = fopen(file1, "w");
    if (temp != NULL) {
        fclose(temp);
    }

    printf("%s exists: %s\n", file1, file_exists(file1) ? "yes" : "no");
    printf("%s exists: %s\n", file2, file_exists(file2) ? "yes" : "no");

    return 0;
}
*/

