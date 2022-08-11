/*
 *                Ass_3.c
 *  The Solution of Assignment 3 in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdio.h>

include <stdio.h>
#include <string.h>
#define SIZE 10
#define STRSIZE 50

///////////////////////////Question 1////////////////////////////////////
int summation(int arr_size,int*arr){
	int sum=0;
	int i;
	for(i=0;i<arr_size;i++){
		sum+=arr[i];
	}

	return sum;
}


void A3_Q1(void){
	int num[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("Enter Number of the elemnt %d in the array?\n",i+1);
		fflush(stdout);
		scanf("%d",&num[i]);
	}
	int sum=summation(SIZE,num);
	printf("the sum of the array is %d",sum);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 2////////////////////////////////////
int is_distinct(const char* str){
	int i=0;
	while(str[i]!='\0'){

		int j=i+1;
		while(str[j]!='\0'){
			if (str[j]==str[i])return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void A3_Q2(void){
	char str[STRSIZE];
	printf("Enter the string?\n");
	fflush(stdout);
	gets(str);
	if(is_distinct(str))printf("TRUE");
	else printf("FALSE");

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 3////////////////////////////////////
void swap(int*num1,int*num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
	return;
}



void bubble_sort(int*arr,int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i;j++){
			if(arr[j+1]<arr[j]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}

}
void A3_Q3(void){
	int num[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("Enter Number of the elemnt %d in the array?\n",i+1);
		fflush(stdout);
		scanf("%d",&num[i]);
	}
	bubble_sort(num,SIZE);
	for(i=0;i<SIZE;i++){
			printf("%d ",num[i]);

		}

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 4////////////////////////////////////


//Using Swap Function from Question 3


void selection_sort(int*arr,int size){
	int i,j;
	for(i=0;i<size-1;i++){
		int min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min])min=j;
		}
		swap(&arr[i],&arr[min]);

	}


return;
}
void A3_Q4(void){
	int num[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("Enter Number of the elemnt %d in the array?\n",i+1);
		fflush(stdout);
		scanf("%d",&num[i]);
	}
	selection_sort(num,SIZE);
	for(i=0;i<SIZE;i++){
			printf("%d ",num[i]);

		}

	return;
}
/////////////////////////////////////////////////////////////////////////



///////////////////////////Question 6////////////////////////////////////
int last_search(const int*arr,int size,int number)
{
	int i=size-1;
	for(;i>=0;i--){
		if(arr[i]==number)return i;
	}
	return -1;



}


void A3_Q6(void){
	int num[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("Enter Number of the elemnt %d in the array?\n",i+1);
		fflush(stdout);
		scanf("%d",&num[i]);
	}
	int index=last_search(num,SIZE,5);
	printf("the last index of number 5 is %d",index);

	return;
}
/////////////////////////////////////////////////////////////////////////
