//Double Dimensional Array
/*
#include <stdio.h>
int table[2][3]={{1,2,3},{4,5,6}};
int r,c;
int main(void){
for(r=0;r<2;r++){
	for(c=0;c<3;c++){
		printf("%d ",table[r][c]);
   }
	printf("\n");
 }
 return 0;
}
*/

//Binary Search
/*
#include<stdio.h>
int main(void){
int arr[6]={4,12,23,34,45,56};
int target=23;
int low=0,high=5,mid,found=-1;

while(low<=high){
	mid=(low+high)/2;
	if(arr[mid]==target){
		found++;
		break;

	}
	else if(arr[mid]<target){
		mid=low+1;

	}
	else{
		mid=high-1;
	}
}

if(found!=-1){
	printf("Target found at location: %d",mid);
}
else{
	printf("Target not found");
}
return 0;
}
*/
//Bubble Sort
/*

#include<stdio.h>

int main(void){
	int arr[5]={65,12,34,13,21};
	int n=5,temp,i,j;
	for( i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");

	return 0;
}
*/

//Selection Sort
/*
#include<stdio.h>

int arr[5]={64,23,34,56,11};
int i,j,temp,n=5,min;
int main(void){
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
*/

//Problem 1:Array Statistics
/*
#include<stdio.h>
int score[6]={78,92,55,88,65,99};
int n=6,i,j,temp;
int main(void){
	int sum;
	for(int i=0;i<n;i++){
		sum+=score[i];
	}
	printf("Sum is %d\n",sum);
	printf("Average is %d\n",sum/n);
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(score[j]<score[min]){
				min=j;
			}
		}
		temp=score[i];
		score[i]=score[min];
		score[min]=temp;
	}
	printf("Minimum value is %d\n",score[0]);
	printf("Maximum value is %d",score[5]);
	return 0;
	}
*/

//Problem 3:Linear search with input
/*
#include<stdio.h>
int main(void){
	int arr[6]={23,8,45,15,4,67};
	int i,target,found=-1,n=6;
	printf("Enter the target: ");
	fflush(stdout);
	scanf("%d",&target);
	for(i=0;i<n;i++){
		if(arr[i]==target){
			found=i;
			break;
		}
	}
	if(found!=-1){
		printf("Found %d at index %d",target,found);
	}
	else{
		printf("Target not found");
	}
	return 0;
}
*/

//Problem 3:Ring Buffer
/*
#include<stdio.h>
#define SIZE 5
void push(int value),pop();
int arr[SIZE],head=0,tail=0,count=0;
int main(void){
	push(10);
	push(20);
	push(30);
	pop();
	pop();
	push(40);
	push(50);
	push(60);
	push(70);
	push(80);
	for(int i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}

}

void push(int value){
	if(count==SIZE){
		printf("Buffer Full,cannot push %d\n",value);
		return;
	}
	arr[head]=value;
	head=(head+1)%SIZE;
	count++;
	printf("Pushed %d\n",value);

}
void pop(){
	if(count==0){
		printf("Buffer is empty");
		return;
	}

	int value=arr[tail];
	tail=(tail+1)%SIZE;
	count--;
	printf("Popped %d\n",value);
}
*/
