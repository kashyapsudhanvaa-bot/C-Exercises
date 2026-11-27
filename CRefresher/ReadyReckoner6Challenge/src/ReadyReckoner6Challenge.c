//Problem 7:Word Count
/*
#include<stdio.h>

int main(){
FILE *fp=fopen("sentence.txt","w");
if(fp==NULL){
	printf("Unable to open file for reading");
	return 1;
}
fprintf(fp,"the quick brown fox jumps over the lazy dog");
fclose(fp);

FILE *fp2=fopen("sentence.txt","r");
       char word[50];
       int count =0;

		while(fscanf(fp2,"%49s",word)==1){
			count++;
		}
		printf("Word Count: %d",count);
		fclose(fp2);
		return 0;

}
*/
//Problem 8:Saving structs directly to a binary file

#include<stdio.h>

int main(void){
	struct Employee{
		int id;
		int hoursWorked;
	};
	struct Employee team[2]={{1,30},{2,40}};

	FILE *fp=fopen("team.bin","wb");
	if(fp==NULL){
		printf("Unable to open file for writing");
		return 1;
	}
	fwrite(team,sizeof(team),2,fp);
	fclose(fp);

	struct Employee loaded[2];

	FILE *fp2=fopen("team.bin","rb");
	if(fp2==NULL){
		printf("Unable to open file for reading");
		return 1;
	}
	fread(loaded,sizeof(loaded),2,fp2);

	for(int i=0;i<2;i++){
		printf("Employee %d : id:%d, Hours Worked:%d\n",i+1,loaded[i].id,loaded[i].hoursWorked);
	}
	return 0;
}
