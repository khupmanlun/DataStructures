//find the missing no of the inputs given 
//Dated:july 18,2018
//author:Khup
#include<iostream>
using namespace std;
#define MAX 10
int main(void){
	int *arr =(int *)malloc(sizeof(int)*MAX);
	for(int i = 0;i<=MAX-2;i++){
		scanf("%d",&arr[i]);	
	}
	int first = arr[0];
	for(int j = 1;j<=MAX-2;j++){
		first++;
		if(first!= arr[j]){
			printf("the missing no is %d",first);
			break;
		}
					
	}
}
