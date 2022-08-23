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


///////////////////////////Question 14////////////////////////////////////
void reverse_string(char*st){
	int i=0,j=0;
	char reverse[STRSIZE];
	while(st[i]!='\0'){
			reverse[i]=st[i];
			i++;
	}
	i--;
	char first=st[0];
	while(reverse[i]!=first){
		st[j]=reverse[i];
		i--;
		j++;
	}
	st[j]=first;
	return;
}


void A3_Q14(void){
	char str[STRSIZE];
	printf("Enter the sentence?\n");
	fflush(stdout);
	gets(str);
	reverse_string(str);
	printf("%s",str);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 15////////////////////////////////////
void concate_string(char* str1,char* str2){
	int j=0,i=0;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	return;


}

void A3_Q15(void){
	char str1[STRSIZE];
	char str2[STRSIZE];
	printf("Enter the first sentence?\n");
	fflush(stdout);
	gets(str1);
	printf("Enter the second sentence?\n");
	fflush(stdout);
	gets(str2);
	concate_string(str1,str2);
	printf("%s",str1);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 16////////////////////////////////////
void reverse_arr(int* arr,int size){
	int reverse[size];
	int i,j;
	for(i=0;i<size;i++){
		reverse[i]=arr[i];
	}
	i--;

	for(j=0;j<size;j++){
		arr[j]=reverse[i];
		i--;
	}
	return;
}

void A3_Q16(void){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	reverse_arr(arr,10);
	for(int i =0;i<10;i++){
		printf("%d ",arr[i]);
	}



	return;
}
/////////////////////////////////////////////////////////////////////////

///////////////////////////Question 17////////////////////////////////////
//   void swap(int*num1,int*num2) use this function to swap between two numbers
int* swap_arr(int*arr1,int arr1_size,int*arr2,int arr2_size){
	int i=0;
	for(;i<arr2_size;i++){
		swap(&arr1[i],&arr2[i]);
	}
	return &arr1[i];
	//return pointer to the rest of the longest arry

}
void A3_Q17(void){
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[5]={10,20,30,40,50};
	int* ptr=swap_arr(arr1,10,arr2,5);






	for(int i =0;i<5;i++){
		printf("%d ",arr1[i]);

	}
	printf("\n");
	for(int i =0;i<5;i++){
			printf("%d ",arr2[i]);
		}
	printf("\n");

	for(int i =0;i<5;i++){
				printf("%d ",*(ptr+i));
			}




	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 18////////////////////////////////////
int consecutive_maxSum(int* arr,int size){
	int max=0;
	for(int i =0;i<size;i++){
		int sum=arr[i];
		for(int j=i+1;arr[j]==arr[i];j++,i++){
			sum+=arr[j];
			if(sum>max)max=sum;
		}
	}

	return max;
}

void A3_Q18(void){
int arr[100]={1,2,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,2,1,2,1,2,1,1,1,1,2,2};
int max_count_sum=consecutive_maxSum(arr,100);
printf("%d",max_count_sum);
	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 19////////////////////////////////////
int arr_compare(int*arr1,int*arr2,int size){ // two arrays should be of the same size
	for(int i=0,j=0;i<size ;i++,j++){
		if(arr1[i] != arr2[j]){
			return 1;
		}
	}
	return 0;
}


void A3_Q19(void){
	int arr1[10]={0,1,3,3,4,5,6,7,8,9};
	int arr2[10]={0,1,2,3,4,5,6,7,8,9};

	printf("%d",arr_compare(arr1,arr2,10));
	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 20,21 ////////////////////////////////////

typedef unsigned char uint8;

void full_arr_ex(int upper,int lower,uint8*arr,int*ptrsize){
	uint8*ptr=arr;
	int size=0;
	int num=upper-1;
	if(lower>=upper){arr[0]=0xFF;arr[1]=0xFF;*ptrsize=2;return;}
	for(int i=0;num>lower;i++){
		ptr[i]=num;
		size++;
		num--;

	}
	*ptrsize=size;
	return;
}
void full_arr_inc(int upper,int lower,uint8*arr,int*ptrsize){
	uint8*ptr=arr;
	int size=0;
	int num=upper;
	if(lower>=upper){arr[0]=0xFF;arr[1]=0xFF;*ptrsize=2;return;}
	for(int i=0;num>=lower;i++){
		ptr[i]=num;
		size++;
		num--;

	}
	*ptrsize=size;
	return;
}

void A3_Q20_21(void){
	uint8 arr[256];
	int size;
	int* ptrsize=&size;



	// Question 20
	full_arr_ex(10,5,arr,ptrsize);
	for(int i =0;i<size;i++){
			printf("%d ",arr[i]);
		}
	printf("\n");

	// Question 21
	full_arr_inc(10,5,arr,ptrsize);
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 22////////////////////////////////////
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new){
	if(n_old==0)return 0;
	int j=1;
	arr_new[0]=arr_old[0];
	(*n_new)++;
	for(int i=1;i<n_old;i++){
		if(arr_old[i]==arr_old[i-1])continue;
		else{
			*n_new = *n_new+1;
			arr_new[j]=arr_old[i];
			j++;
		}
	}



	return 1;


}


void A3_Q22(void){
	int arr[10]={0,0,1,1,2,2,3,5,5,6,7}; //input: Sorted array
	int newarr2[10];
	int newsize=0;
	int* ptrsize=&newsize;
	removeDuplicates(arr, 10, newarr2, ptrsize);
	for(int i=0;i<newsize;i++){
		printf("%d ",newarr2[i]);
	}

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 23////////////////////////////////////
void count_freq(char*str,char*freq){
	int i=0;
	while(str[i]!='\0'){
		freq[str[i]]++;
		i++;
	}
}


void A3_Q23(void){
	char str[100];
	char freq[256]={0};

	printf("Enter String !\n");
	fflush(stdout);
	gets(str);
	count_freq(str,freq);
	for(int i=0;i<256;i++){
		if(freq[i])printf("%c --> %d times\n",i,freq[i]);
	}


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 24////////////////////////////////////
int sec_largest(int*arr,int size){
	int max=arr[0],last_max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			last_max=max;
			max=arr[i];
		}
	}
	return last_max;
}
void A3_Q24(void){
	int arr[10]={0,1,2,3,14,25,6,7,8,9};

	int second_max=sec_largest(arr,10);
		printf("%d",second_max);

	return;
}
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
int main(void){

	A3_Q1();
return 0;
}
