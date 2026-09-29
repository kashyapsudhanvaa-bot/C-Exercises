#include<stdio.h>
#include<stdbool.h>

#define CACHESIZE 2000

double cache[CACHESIZE];  //Initializing Empty Array
bool cacheset[CACHESIZE]; //Initializing Boolean Array
int count=0; //Set Count Meter as 0

/*Returns input parameter itself when input is 1 or 0.
 * Then checks array cacheset[] to check whether the result has been calculated for the input parameter
 *Returns the result if already calculated
 *Calculates the result for new input,adds it to array of existing results cache[]
 */
double fibonacci(int n){

	count++;  //Increment Count Meter

	if(n==0  || n==1){  //Base Case
		return n;
		}
	if(cacheset[n]==true){   //Checks whether the result has been calculated previously
	return cache[n];     //Returns the previously calculated result
	}

	double result=fibonacci(n-1)+fibonacci(n-2);//Recursive Case
	cache[n]=result;
	cacheset[n]=true;     //Updates both the arrays
	return result;
}

int main(void){
	for(int i=0;i<20;i++){
		printf("%d: %.0lf\n",i,fibonacci(i));   //Calling the function


	}
	printf("Count=%d\n",count);

}



