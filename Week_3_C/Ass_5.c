/*
 *                Ass_5.c
 *  The Solution of Assignment 5 in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdio.h>
#include <string.h>

///////////////////////////Question 1////////////////////////////////////
typedef struct{
	char*name;
	char*roll;
	int marks;
} student ;
void A5_Q1(void){
	student s1={"zyad","CSE student",600};
	student s2=s1;
	printf("S1\n name: %s \t roll: %s \t marks: %d \n\n",s1.name,s1.roll,s1.marks);
	printf("S2\n name: %s \t roll: %s \t marks: %d \n\n",s2.name,s2.roll,s2.marks);
	s2.name="Hassan";
	s2.marks=50;
	printf("S2\n name: %s \t roll: %s \t marks: %d \n\n",s2.name,s2.roll,s2.marks);




	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 2////////////////////////////////////
typedef struct{
	int feet;
	float inch;
} distance ;


void A5_Q2(void){
	distance d1,d2,sum;

	printf("Enter First the distance (feet inch):\n");
	fflush(stdout);
	scanf(" %d%f",&d1.feet,&d1.inch);

	printf("Enter Second the distance (feet inch):\n");
	fflush(stdout);
	scanf(" %d%f",&d2.feet,&d2.inch);

	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;

	while(sum.inch>12){
		sum.inch-=12;
		sum.feet++;
	}


	printf("The Sum Distance if %d feet and %0.2f inch",sum.feet,sum.inch);





	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 3////////////////////////////////////
typedef struct {
	float real_number;
	float imagine_number;
}complex_number;
complex_number sum_complex(complex_number n1,complex_number n2){
	complex_number sum;
	sum.real_number=n1.real_number+n2.real_number;
	sum.imagine_number=n1.imagine_number+n2.imagine_number;
	return sum;
}
void A5_Q3(void){
	complex_number n1={10,3.5};
	complex_number n2={2.9,8.3};
	complex_number sum =sum_complex(n1,n2);
	printf("The Sum %0.2f+%0.2fi ",sum.real_number,sum.imagine_number);





	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 4////////////////////////////////////
typedef struct {
	int hour;
	int min;
	int sec;
}time;

time diff_time(time t2 , time t1){
	if(t2.hour<t1.hour){
		time temp=t1;
		t1=t2;
		t2=temp;
	}
	else if (t2.hour==t1.hour){
		if(t2.min<t1.min){
			time temp=t1;
			t1=t2;
			t2=temp;
		}
		else if(t2.min==t1.min){
			if(t2.sec<t1.sec){
				time temp=t1;
				t1=t2;
				t2=temp;
			}
		}
	}




	time result={t2.hour-t1.hour,t2.min-t1.min,t2.sec-t1.sec};
	while(result.sec<0){
		result.min--;
		result.sec+=60;
	}
	while(result.min<0 && result.hour>0){
		result.hour--;
		result.min+=60;
	}


	return result;
}

void A5_Q4(void){
	time t1={4,30,20};
	time t2 ={4,50,10};
	time re=diff_time(t1,t2);
	printf("The difference time is %d hours %d minutes %d seconds",re.hour,re.min,re.sec);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 5////////////////////////////////////
typedef struct {
	char name[50];
	int id;
	char grade[3];
}STD;
void get_std(STD*arr,int size){
	for(int i=0;i<size;i++){
		printf("Enter Student %d \n",i+1);
		printf("name :");
		fflush(stdout);
		scanf("%s",arr[i].name);

		printf("id :");
		fflush(stdout);
		scanf("%d",&arr[i].id);

		printf("grade :");
		fflush(stdout);
		scanf("%s",arr[i].grade);
	}
	return;
}
void print_std(STD*arr,int size){
	for(int i=0;i<size;i++){
		printf("\nStudent %d \n\nname : %s \t id : %d \t grade : %s \n\n",i+1,arr[i].name,arr[i].id,arr[i].grade);
		fflush(stdout);

	}
	return;
}

void A5_Q5(void){
	STD arr[10];
	get_std(arr,10);
	print_std(arr,10);


	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 6////////////////////////////////////

void A5_Q6(void){
	union family_name{
		char first_name[30];
		char last_name[30];
	}f1;
	strcpy(f1.first_name,"Zyad");
	printf("f1.first_name = %s\t f1.last_name= %s\n",f1.first_name,f1.last_name);
	strcpy(f1.last_name,"Hassan");
	printf("f1.first_name = %s\t f1.last_name= %s\n",f1.first_name,f1.last_name);
	printf("%d",sizeof(f1));



	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 7////////////////////////////////////

void A5_Q7(void){
	typedef enum {
		Level_1=1,Level_2,Level_3
	}Fan_Level;
	Fan_Level fan1= Level_1 ;
	if(fan1==Level_1){
		printf("%d\n",fan1);
		fan1=Level_2;
		printf("%d",fan1);

	}


	return;
}
/////////////////////////////////////////////////////////////////////////



int main(void){


	A5_Q1();
return 0;
}







