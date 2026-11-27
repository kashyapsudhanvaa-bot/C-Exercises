//Bubble Sort
/*
#include<stdio.h>

int arr[5]={64,25,12,22,11};
int main(void){
	int i,j,temp,n=5;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
*/

#include<stdio.h>
int arr[5]={10,20,30,40,50};
int main(void){
	int i,j,n=5,sum1=0,sum2=0;
	for(i=0;i<n;i++){
		sum1+=arr[i];
	}
	printf("Sum using index= %d\n",sum1);
	for(j=0;j<n;j++){
		sum2+=*(arr+j);
	}
	printf("Sum using pointer= %d",sum2);

}

