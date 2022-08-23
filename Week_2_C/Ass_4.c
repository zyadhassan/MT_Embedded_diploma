/*
 *                Ass_4.c
 *  The Solution of Assignment 4 in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdio.h>


///////////////////////////Question 1////////////////////////////////////
int sum_by_pointer(int*pointer,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=pointer[i];
	}

	return sum;

}

void A4_Q1(void){
	int arr[5]={1,2,3,4,5};
	int* ptr =arr;
	printf("the sum is %d",sum_by_pointer(arr,5));
	return;
}
/////////////////////////////////////////////////////////////////////////









/////////////////////////////////////////////////////////////////////////
int main(void){
	// call any Question as function like  A4_Q1() where it's a function of the solution of Question 1
return 0;
}
