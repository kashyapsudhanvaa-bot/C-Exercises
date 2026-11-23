//Problem 1:Second Largest element
/*
#include<stdio.h>

int main(){
int n=5,largest=0,second=0;
int arr[5]={12,34,21,35,26};

for(int i=0;i<n;i++){
	if(arr[i]>largest){
		second=largest;
		largest=arr[i];
	}
	else if(arr[i]>second&&arr[i]<largest)
		second=arr[i];
}
printf("Largest: %d , Second largest: %d",largest,second);
return 0;
}
*/

//Problem 2:Reverse an array in place
/*
#include<stdio.h>

int main(){
	int n=5;
	int a[]={10,20,30,40,50};
	for(int i=n-1;i>=0;i--){
		printf("%d ",*(a+i));
	}
}
*/

//Problem 3:Two Sum
/*
#include<stdio.h>

void twosum(int n,int a[],int target){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]+a[j]==target){
				printf("%d,%d\n",i,j);
			}
		}
	}
}

int main(){
	int n=5;
	int a[]={2,1,8,3,4};
	twosum(n,a,11);
	return 0;
}
*/

//Problem 4:Remove duplicates
/*
#include<stdio.h>

void delete(int arr[],int index,int *n){
	for(int i=index;i<(*n)-1;i++){
			arr[i]=arr[i+1];
	       }
		(*n)--;
}

int main(){
	int cur=0;
	int n=7;
	int a[]={1,2,2,3,4,4,5};
	for(int i=0;i<n;i++){
		if(cur==a[i]){
			delete(a,i,&n);
		}
		else{
			cur=a[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	return 0;
}
*/

//Problem 5:Find the missing number
/*
#include<stdio.h>
int main(){
	int n=6;
	int a[]={1,2,4,5,6};
	int s=n*(n+1)/2;
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+a[i];
	}
	int missing=s-sum;
	printf("%d is the missing number",missing);
	return 0;
}
*/

//Problem 6:Shift array to left

#include<stdio.h>

int reverse(int a[],int start,int end){
	int temp[7]={};
	for(int i=start-1;i>=end;i--){
		temp[i]=*(a+i);
	}
	return a+temp;

}
int main(){
	int a[]={1,2,3,4,5,6,7};
	reverse(a,2,0);
	for(int i=0;i<7;i++){
		printf("%d ",a[i]);
	}/*
	}
	a=reverse(a,7,2);
	a=reverse(a,7,0);
	*/
}
