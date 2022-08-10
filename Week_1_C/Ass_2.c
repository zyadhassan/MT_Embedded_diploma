/*
 *                Ass2.c
 *  The Solution of Assignment 2 in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdio.h>

///////////////////////////Question 1////////////////////////////////////

long long cube(int number){
	long long result=(long long)number*number*number;

	return result;
}



void A2_Q1(void){
	int num;
	printf("Enter Number?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("The cube of the number %d is %Ld",num,cube(num));

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 2////////////////////////////////////

char is_alphabet(char character){
	char result;
	if(character >=65 && character<=90){
		result=1;
	}
	else if (character >=97 && character<=122){
		result=1;
	}
	else result=0;
	return result;
}



void A2_Q2(void){
	char character;
	printf("Enter character?\n");
	fflush(stdout);
	scanf("%c",&character);
	if (is_alphabet(character)==1){
		printf("It's alphabet .");

	}
	else printf("It's not alphabet .");

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 3////////////////////////////////////

char is_positive(int num){
	char result;
	if(num>=0)result=1;
	else result=0;

	return result;
}


void A2_Q3(void){
	int num;
	printf("Enter Number?\n");
	fflush(stdout);
	scanf("%d",&num);
	if(is_positive(num))printf("It's positive number.");
	else printf("It's negative number.");

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 4////////////////////////////////////

void Calcluter(char operation,int num1,int num2){

	switch(operation){
		case '+':
			printf("%d %c %d = %d",num1,operation,num2,num1+num2);
			break;
		case '-':
			printf("%d %c %d = %d",num1,operation,num2,num1-num2);
			break;
		case '*':
			printf("%d %c %d = %d",num1,operation,num2,num1*num2);
			break;
		case '/':
			printf("%d %c %d = %f",num1,operation,num2,(float)num1/num2);
		}

	return ;
}


void A2_Q4(void){
	int num1,num2;
	char operation;
	printf("Enter operation ( * or / or + or - )?\n");
	fflush(stdout);
	scanf("%c",&operation);
	printf("Enter first number and second number ?\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	if(operation == '*' || operation == '/' || operation=='-'  || operation =='+'){
		Calcluter(operation,num1,num2);

	}
	else{
		printf("Wrong Operation!");
	}


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 5////////////////////////////////////

char is_odd(int num){
	char result;
	if(num%2==0)result=0;
	else result=1;

	return result;
}


void A2_Q5(void){
	int num;
	printf("Enter Number?\n");
	fflush(stdout);
	scanf("%d",&num);
	if(is_odd(num))printf("It's odd number.");
	else printf("It's even number.");

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 6////////////////////////////////////

char conver_letter_lower_TO_upper(char letter){
	char result;
	result=letter-32;

	return result;
}


void A2_Q6(void){
	char letter;
	printf("Enter letter?\n");
	fflush(stdout);
	scanf("%c",&letter);
	printf("%c",conver_letter_lower_TO_upper(letter));

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 7////////////////////////////////////

char is_multiple(int num1,int num2){
	char result;
	if(num1%num2==0)result=1;
	else result=0;

	return result;
}


void A2_Q7(void){
	int num1,num2;
	printf("Enter First Number and Second Number?\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	if(is_multiple(num1,num2))printf("%d is multiple of %d",num1,num2);
	else printf("%d is not multiple of %d",num1,num2);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 8////////////////////////////////////

char is_prime(int num){
	char result=1;
	for(int i=2;i<num;i++){
		if(num%i==0){
			result=0;
			break;
		}
	}
	return result;
}



void make_prime(int num1,int num2){
	for(int i=num1;i<=num2;i++){
		if(is_prime(i)){
			printf("%d ",i);
		}
	}
	return;
}


void A2_Q8(void){
	int num1,num2;
	printf("Enter First Number and Second Number?\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	make_prime(num1,num2);
	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 10////////////////////////////////////
int count_holes(int num){
	int count=0;
	while(num!=0){
		int digit=num%10;
		switch(digit){
		case 1:
		case 2:
		case 3:
		case 5:
		case 7:
			break;
		case 0:
		case 4:
		case 6:
		case 9:
			count++;
			break;
		case 8:
			count+=2;
		}

		num/=10;

	}

	return count;


}



void A2_Q10(void){
	int num;
	printf("Enter Number ?\n");
	fflush(stdout);
	scanf("%d",&num);

	printf("holes equals %d",count_holes(num));
	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 11////////////////////////////////////
int is_power(int num,int power){

	while(num%power==0){
		num/=power;
	}
	if (num==1)return 1;
	else return 0;


}


void A2_Q11(void){
	int num;
	printf("Enter Number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	if(is_power(num,2)){
		printf("%d is power of 2.",num);
	}
	else{
		printf("%d is not power of 2.",num);
	}


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 13////////////////////////////////////
int floor(float num1,float num2){
	float result;
	result=num1+num2;
	return (int)result;
}

void A2_Q13(void){
	float num1,num2;
	printf("Enter the two float Numbers ?\n");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	int result =floor(num1,num2);
	printf("the result is %d",result);


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 14////////////////////////////////////
int fib(int num){
switch (num){
case 0:
	return 0;
case 1:
	return 1;
}
return fib(num-1)+fib(num-2);
}

void A2_Q14(void){
	int num;
	printf("Enter Number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	for(int i=0;i<=num;i++){
		printf("%d ",fib(i));
	}


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 15////////////////////////////////////

int count_1s_32bit(unsigned int num){
	unsigned int mask=0x80000000;
	int count=0;
	for (int i=0;i<32;i++){
	unsigned int result=num&mask;
	if(result)count++;
	num=num<<1;
	}
	return count;
}

void A2_Q15(void){
	unsigned int num;
	printf("Enter Number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("Number of ones in %d is %d",num,count_1s_32bit(num));


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 16////////////////////////////////////

int count_1s_8bit(unsigned int num){
	unsigned int mask=0x80;
	int count=0;
	for (int i=0;i<8;i++){
	unsigned int result=num&mask;
	if(result)count++;
	num=num<<1;
	}
	return count;
}


void A2_Q16(void){
	unsigned int num;
	printf("Enter Number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("Number of ones in %d is %d",num,count_1s_8bit(num));


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 17////////////////////////////////////

int max_xor(int L ,int R){
	int max=0;
	for(int A=L;A<=R;A++){
		for(int B=A;B<=R;B++){
			int result=A^B;
			if(result>max)max=result;
		}
	}
	return max;
}

void A2_Q17(void){
	int num1,num2;
	printf("Enter two numbers ?\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("The maximum value is %d",max_xor(num1,num2));

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 18////////////////////////////////////
int can_present(int num){

	for(int i =2;i<num;i++){
		for(int j=2;j<num;j++){
			int result=(int)(pow(i,j)+ 1e-9);
			if(result==num)return 1;
		}

	}
	return 0;
}

void A2_Q18(void){
	int num;
	printf("Enter number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d can_present in p^q is %d",num,can_present(num));

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 19////////////////////////////////////
int is_Power_Of3(int num){

	while(num%3==0){
		num/=3;
	}
	if (num==1)return 0;
	else return 1;


}

void A2_Q19(void){
	int num;
	printf("Enter number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",is_Power_Of3(num));

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 20////////////////////////////////////
int count_max_1s_16bit(unsigned int num){
	unsigned int mask=0x8000;
	int count=0;
	int maxcount=0;
	for (int i=0;i<16;i++){
	unsigned int result=num&mask;
	if(result){
		count++;
		if(count>=maxcount)maxcount=count;
	}
	else count=0;
	num=num<<1;
	}
	return maxcount;
}


void A2_Q20(void){
	int num;
	printf("Enter number ?\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",count_max_1s_16bit(num));

	return;
}
/////////////////////////////////////////////////////////////////////////


















//////////////////////////////////////////////////////////////////////////
//////////////////////////////Main Function//////////////////////////////
int main(void){
	// call any Question as function like  A2_Q13() where it's the function of the solution of Question 13
return 0;
}
