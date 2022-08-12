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



///////////////////////////Question 7////////////////////////////////////


void A3_Q7(void){
	int num[200];
	int nth_elemnt;
	printf("Enter the nth term ?\n");
	fflush(stdout);
	scanf("%d",&nth_elemnt);
	int elemnt=1;
	for(int i=0;i<=nth_elemnt;i++){
		num[i]=elemnt;
		elemnt+=2;

	}
	for(int i=0;i<=nth_elemnt;i++){
			printf("%d ",num[i]);

		}
	printf("The nth term equals %d",num[nth_elemnt]);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 8////////////////////////////////////


void A3_Q8(void){
	unsigned long long num[200];
	int nth_elemnt;
	printf("Enter the nth term ?\n");
	fflush(stdout);
	scanf("%d",&nth_elemnt);
	for(int i=0;i<=nth_elemnt;i++){
		num[i]=(unsigned long long)(pow(3,i)+ 1e-9);

	}

	printf("The nth term equals %Ld",num[nth_elemnt]);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 9////////////////////////////////////


void A3_Q9(void){
	unsigned int num[200];
	int nth_elemnt;
	printf("Enter the nth Fibonacci number ?\n");
	fflush(stdout);
	scanf("%d",&nth_elemnt);
	num[0]=0;
	num[1]=1;
	for(int i=2;i<=nth_elemnt;i++){
		num[i]=num[i-1]+num[i-2];

	}

	printf("The nth term equals %d",num[nth_elemnt]);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 10////////////////////////////////////

void lowercase( char* st){
	int i=0;
	while(st[i]!='\0'){
		if(st[i]>=65 && st[i]<= 90){
			st[i]=st[i]+32;
		}
		i++;
	}


	return;
}


void A3_Q10(void){
	char str[STRSIZE];
	printf("Enter the sentence?\n");
	fflush(stdout);
	gets(str);
	lowercase(str);
	printf("%s",str);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 11////////////////////////////////////

int str_freq(char* st,char ch){
	int i=0;
	int counter=0;
	lowercase(st);
	if(ch>=65 && ch<=90)ch=ch+32;
	while(st[i]!='\0'){
		if(st[i]==ch){
			counter++;
		}
		i++;
	}


	return counter;
}


void A3_Q11(void){
	char str[STRSIZE];
	char character;
	printf("Enter the sentence?\n");
	fflush(stdout);
	gets(str);
	printf("Enter the Character?\n");
	fflush(stdout);
	scanf("%c",&character);
	int freq=str_freq(str,character);
	printf("the freq equals %d",freq);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 12////////////////////////////////////

int str_length( char* st){
	int i=0;
	int counter=0;
	while(st[i]!='\0'){
		counter++;
		i++;
	}


	return counter;
}


void A3_Q12(void){
	char str[STRSIZE];
	printf("Enter the sentence?\n");
	fflush(stdout);
	gets(str);
	int len= str_length(str);
	printf("the length of the string equals %d",len);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 13////////////////////////////////////

void alph_only( char* st){
	char new_st[STRSIZE];
	int i=0;
	int j=0;
	while(st[i]!='\0'){
		if(st[i]>=65 && st[i]<= 90){
			new_st[j]=st[i];
			j++;
		}
		else if(st[i]>=97 && st[i]<= 122){
			new_st[j]=st[i];
			j++;
		}
		i++;
	}
	new_st[j]='\0';
	for(int k=0;k<=j;k++){
		st[k]=new_st[k];
	}


	return;
}


void A3_Q13(void){
	char str[STRSIZE];
	printf("Enter the sentence?\n");
	fflush(stdout);
	gets(str);
	alph_only(str);
	printf("%s",str);



	return;
}
/////////////////////////////////////////////////////////////////////////