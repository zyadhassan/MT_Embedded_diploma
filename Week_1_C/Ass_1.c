/*
 *                Ass1.c
 *  The Solution of Assignment 1 in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdio.h>
#include <math.h>
#define PI 3.142857 // to be used in Question 4


// Question 1 in the Assignment 1
void Q1(void){

	int num1;
		int num2;
		int result;

		printf("Enter First Number!\n");
		fflush(stdout);
		scanf(" %d", &num1);


		printf("Enter Second Number Number!\n");
		fflush(stdout);
		scanf(" %d", &num2);

		result=(((num1+num2)*3)-10);

		printf("Sum is %d",result);
	return;
}

// Question 3 in the Assignment 1
void Q3(void){

	float temp;
	float celi;

	printf("Enter The Temperature in Celsius \n");
	fflush(stdout);
	scanf(" %f", &celi);


	temp=celi*9/5;
	temp+=32;

	printf("the Temperature eqauls %f",temp);

	return;
}

// Question 2 in the Assignment 1
void Q2(void){
	char name[20]="zyad hassan";
	char grade ='B';
	printf("%s \n%c",name,grade);


	return;
}

// Question 4 in the Assignment 1
void Q4(void){
	float radius,area,circumference;

	printf("Enter the radius of the circle?\n");
	fflush(stdout);
	scanf(" %f", &radius);

	area=radius*radius*PI;
	circumference=2*PI*radius;

	printf("The Area of the Circle is %f\n",area);
	printf("The Circumference is %f",circumference);

	return;
}

// Question 5 in the Assignment 1
void Q5(void){
	char Character;
	printf("Enter Character ? \n");
	fflush(stdout);
	scanf(" %c", &Character);

	printf("The ASCII Code of %c is %d",Character,Character);

	return;
}

// Question 6 in the Assignment 1
void Q6(void){
	int num1,num2;
	printf("Enter Two Numbers ?\n");
	fflush(stdout);
	scanf(" %d%d",&num1,&num2);

	if (num1==num2){
		printf("The two numbers are equal ");
	}
	else
		num1>num2?printf("The first number is higher"):printf("The second number is higher");


	return;
}

// Question 7 in the Assignment 1
void Q7(void){
	int num1,num2,num3;
	printf("Enter Three numbers ?\n");
	fflush(stdout);
	scanf(" %d%d%d",&num1,&num2,&num3);

	int smallest=num1;
	if (num2<smallest){
		smallest=num2;
	}
	if (num3<smallest){
		smallest=num3;
	}

	printf("The Smallest Value is %d",smallest);

	return;
}

// Question 8 in the Assignment 1
void Q8(void){
	int num;
	printf("Enter the number\n");
	fflush(stdout);
	scanf(" %d", &num);

	float base=sqrt(num);

	if(base==(int)base){
		printf("It's a Perfect Square");
	}
	else{
		printf("It's not a perfect Square");
	}


	return;
}

// Question 9 in the Assignment 1
void Q9(void){
	int grade;
	printf("Enter your grade percentage?\n");
	fflush(stdout);
	scanf(" %d", &grade);

	if (grade>=85)printf("Excellent");
	else if (grade>=75 && grade <85)printf("Very Good");
	else if (grade>=65 && grade<75)printf("Good");
	else if (grade>=50 && grade<65)printf("Pass");
	else printf("Fail");


	return;
}

// Question 10 in the Assignment 1
void Q10(void){
	char operation;
	int num1,num2;

	printf("Enter the operation( * or + or / or - )\n");
	fflush(stdout);
	scanf(" %c", &operation);
	printf("Enter The two operands? \n");
	fflush(stdout);
	scanf(" %d%d",&num1,&num2);

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

	return;
}

// Question 11 in the Assignment 1
void Q11(void){
	int sum=0;
	for(int i=1;i<=100;i++){
		sum+=i;
	}
	printf("%d",sum);
	return;
}

// Question 12 in the Assignment 1
void Q12(void){
	int num;
	long long factorial=1;
	printf("Enter the number?\n ");
	fflush(stdout);
	scanf("%d", &num);

	for(int i=1;i<=num;i++){
		factorial*=i;
	}
	printf("The Factorial is %Ld .",factorial);

	return;
}

// Question 13 in the Assignment 1
void Q13(void){
	int num;
	int prime=1;
	printf("Enter the number?\n ");
	fflush(stdout);
	scanf("%d", &num);

	for(int i=2;i<=num;i++){
		if(num%i==0 && num!=i){
			prime=0;
		}
	}
	if (prime==0){
		printf("%d is not prime number .",num);
	}
	else printf("%d is prime number.",num);

	return;
}

















int main(void){
	Q13();
return 0;
}

