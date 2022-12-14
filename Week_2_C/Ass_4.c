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


///////////////////////////Question 2////////////////////////////////////
int Length_str(char*str){
	int length=0;
	while(*str!='\0'){
		length++;
		str++;
	}

	return length;
}

void A4_Q2(void){
	char str[100];
	printf("Enter String !\n");
	fflush(stdout);
	gets(str);
	printf("The length of the string is %d",Length_str(str));
	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 3////////////////////////////////////

void reverse_arry(int*arr,int size){
	for(int i=0;i<size/2;i++){ // size/2 swapping till the middle of array
		swap(arr+i,(arr+(size-1)-i));//Implemented in Assignment 3 Question 3
	}
}
void A4_Q3(void){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	reverse_arry(arr,10);
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 4////////////////////////////////////

int smallest_arry(int*arr,int size){
	int smallest=*arr;
	for(int i=1;i<size;i++){
		if(smallest>*(arr+i))smallest=*(arr+i);
	}
	return smallest;
}
void A4_Q4(void){
	int arr[10]={0,2,2,0,4,-15,-6,7,-8,9};
	int smallest=smallest_arry(arr,10);
	printf("The smallest elemnt in arry is %d",smallest);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 5////////////////////////////////////
void Copy_arry(int*destention,int*source,int size){
	for(int i=0;i<size;i++){
		*(destention+i)=*(source+i);
	}
}

void A4_Q5(void){
	int arr1[10]={0,2,2,0,4,-15,-6,7,-8,9};
	int arr2[10]={10,11,2,1,3,13,12,50,0,6};
	printf("First Array :");
		for(int i=0;i<10;i++){
			printf("%d ",arr1[i]);
		}
		printf("\n");

	printf("Second Array Before Copy:");
	for(int i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");
	Copy_arry(arr2,arr1,10);
	printf("Second Array After Copy:");
	for(int i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 6////////////////////////////////////

void A4_Q6(void){
	int arr[10]={0,2,2,0,4,15,-6,7,-8,9};
	int* arrptr[10];
	for (int i = 0; i<10;i++){
		arrptr[i]=&arr[i];
	}
	// Print all the array using pointers
	for (int i=0;i<10;i++){
		printf("%d ",*arrptr[i]);
	}
	printf("\n");

	// find the maximum in the array and print it
	int max=*arrptr[0];
	for(int i=0;i<10;i++){
		if(max<*arrptr[i])max=*arrptr[i];
	}
	printf("The max value is %d",max);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 7////////////////////////////////////
void swap_bitwise(int* x, int* y){
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
	return;
}
void A4_Q7(void){
void (*ptrTOfunc)(int*,int*)=swap_bitwise;
int x=5,y=10;
printf("Before Swap:\n X = %d \t Y = %d\n",x,y);
ptrTOfunc(&x,&y); // or (*ptrTOfunc)(x,y)
printf("After Swap:\n X = %d \t Y = %d\n",x,y);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 8////////////////////////////////////
void swap_arrays(int*arr1,int*arr2,int size){
	for (int i=0;i<size;i++){
		swap(arr1,arr2);
		arr1++;
		arr2++;
	}
}
void A4_Q8(void){

	int arr1[10]={0,2,2,0,4,-15,-6,7,-8,9};
	int arr2[10]={10,11,2,1,3,13,12,50,0,6};
	printf("First Array :");
	for(int i=0;i<10;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");

	printf("Second Array :");
	for(int i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n");



	swap_arrays(arr2,arr1,10);

	printf("\nSwapping\n\n");


	printf("First Array :");
	for(int i=0;i<10;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");

	printf("Second Array :");
	for(int i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 9////////////////////////////////////
void last2_string(char*old_string,char*new_string){
	while(*old_string!='\0'){
		old_string++;
	}
	old_string--; // as it was pointing at '\0' so after this operation it points at last character
	*new_string=*old_string;
	new_string++;
	*new_string=' ';
	new_string++;
	old_string--;
	*new_string=*old_string;
	new_string++;
	*new_string='\0';
	return;
}
void A4_Q9(void){
	char str1[100]="Bat";
	char str2[100];
	last2_string(str1,str2);
	printf("%s",str2);


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 10////////////////////////////////////
void swap_pointers(int**ptr1,int**ptr2){
	int* temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
void A4_Q10(void){
	int y=5,x=10;
	int*ptrtox=&x;
	int*ptrtoy=&y;
	printf("ptrTox = %p \t ptrTOy = %p \n",ptrtox,ptrtoy);
	swap_pointers(&ptrtox,&ptrtoy);
	printf("ptrTox = %p \t ptrTOy = %p \n",ptrtox,ptrtoy);


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 11////////////////////////////////////
void swap_16bits_ptr(int*number){
	short*first=number;
	short*second=(first+1);
	short temp=*first;
	*first=*second;
	*second=temp;
	return;
}
void swap_16bits_union(int*number){
	typedef union {
		int x;
		short arr[2];
	}swap ;
	swap block;
	block.x=*number;
	short temp =block.arr[0];
	block.arr[0]=block.arr[1];
	block.arr[1]=temp;
	*number=block.x;
	return;
}
void swap_16bits_bitwise(int*number){
	int mask=0xFFFF0000;
	int temp1 =*number&mask;
	int temp2=*number&(~mask);
	temp1>>=16;
	temp1=temp1&(~mask);// to make the unwanted bits equal 0
	temp2<<=16;
	*number=temp1+temp2;
	return;
}

void A4_Q11(void){
	int x =0xFF0A1122;
	printf("X = %x\n",x);
	swap_16bits_bitwise(&x);
	printf("bit-wise way : X = %x\n",x);
	swap_16bits_union(&x);
	printf("union way    : X = %x\n",x);
	swap_16bits_ptr(&x);
	printf("pointers way : X = %x\n",x);



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 12////////////////////////////////////
int oddrepatednumber(int*arr,int size){
	int num;
	for(int i=0;i<size;i++){
		 num=arr[i];
		int count=0;
		for(int j =0;j<size;j++){
			if(arr[j]==num)count++;
		}
		if(count%2!=0){
			return num;
		}
		else{continue;}
	}
}



void A4_Q12(void){
	int arr[15]={1,1,1,1,2,2,2,3,3,3,3,0,0,0,0};
	printf("%d ",oddrepatednumber(arr,14));



	return;
}
/////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////
int main(void){
	// call any Question as function like  A4_Q1() where it's a function of the solution of Question 1
return 0;
}
