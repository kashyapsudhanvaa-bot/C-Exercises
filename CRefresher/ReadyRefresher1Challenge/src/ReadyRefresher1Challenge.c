#include<stdio.h>
int score;
int main(void){

printf("Enter your score: ");
fflush(stdout);
scanf("%d",&score);
if(score<0||score>100){
	printf("Invalid Input");
}

else if(score>=90){
	printf("Grade A");
}
else if(90 >score && score >=80){
	printf("Grade B");
}
else if(80 >score && score >=70){
	printf("Grade C");
}
else if(70>score && score>=60){
	printf("Grade D");
}
else{
	printf("F");
}
}
