//Binary Search with Comparison Counter
/*
#include<stdio.h>
int arr[10]={4,8,15,23,45,67,70,74,82,86};
int main(void){
	int low=0,high=10,mid,target,found=-1,count=0;
	printf("Enter the target: ");
	fflush(stdout);
	scanf("%d",&target);
	while(low<=high){
		count++;
		mid=(low+high)/2;
		if(target==arr[mid]){
			found=mid;
			break;
		}
		else if(arr[mid]<target){
			low=mid+1;

		}
		else{
			high=mid-1;

		}

	}
	if(found!=-1){
		printf("Found %d at index %d in %d comaprisons",target,mid,count);
	}
	else{
		printf("Target not found in %d comaprisons",count);
	}
	return 0;
}
*/
//Palindrome
/*
#include<stdio.h>
#include<string.h>
int n=5,i,j=0;
char word[]="level";
char temp[]="";
int main(void){
	for(i=n-1;i>=0;i--){
		temp[j]=word[i];
		j++;

	}

	if(strcmp(temp,word)==0){
		printf("%s is a palindrome",word);
	}
	else{
		printf("%s is not a palindrome",word);
	}
}
*/
