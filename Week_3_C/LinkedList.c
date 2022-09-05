
/*
 *               LinkedList.c
 *  The Solution of Linked List Assignment in C course by Eng.Mohamed Tarek
 *         Zyad Hassan
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 struct node{
	int data;
	struct node* next;
};
 struct node* head= NULL;
 struct node* current= NULL;

 //Create Linked List
 void insertAtLast(int data)
 {
    // Allocate memory for new node
    struct node *link = (struct node*) malloc(sizeof(struct node));

    // insert the data to the new node and make the next point to null
    link->data = data;
    link->next = NULL;

    // If head is empty, create new list
    if(head==NULL)
    {
       head = link;
       return;
    }

    current = head;

    // loop until reach the last node in the old list
    while(current->next != NULL)
    {
 	   current = current->next;
    }

    // Make the last node in the old list point to new node
    current->next = link;
 }

 //display the list
 void printList(void)
 {
    struct node *ptr = head;

    printf("[head] =>");

    //start looping from the head until the last node
    while(ptr != NULL)
    {
       printf(" %d =>",ptr->data);
       ptr = ptr->next;
    }

    printf(" [null]\n");
 }
///////////////////////////Question 1////////////////////////////////////
void insert_at_pos(int data,int pos){
	struct node* link= (struct node *)malloc(sizeof(struct node));
	link->data=data;

	if(head==NULL){
		if(pos!=0){
			printf("The Linked List is Empty!!!\n");
			return;
		}
		else{
			head=link;
			head->next=NULL;
			return;
		}
	}
	else{
		if(pos==0){
			link->next=head;
			head=link;
			return;
		}
	}



	struct node* ptr=head;
	int count=0;
	while(ptr->next != NULL && count!=pos-1){
		ptr=ptr->next;
		count++;
	}
	if(count==pos-1){
		link->next=ptr->next;
		ptr->next=link;
	}
	else{
		printf("ERORR,there is no this position\n");
	}

	return;
}
void A6_Q1(void){
	insertAtLast(0);
	insertAtLast(1);
	insertAtLast(2);
	insertAtLast(3);
	insertAtLast(4);
	insertAtLast(5);
	insertAtLast(6);
	insertAtLast(7);
	insertAtLast(8);
	insert_at_pos(50,5);
	printList();
	printf("\n");
	insert_at_pos(50,0);
	printList();
	printf("\n");
	insert_at_pos(50,15);

	return;
}
/////////////////////////////////////////////////////////////////////////


///////////////////////////Question 2////////////////////////////////////
int Middle_node(){
	if(head==NULL){
		printf("The Linked List is Empty\n");
		return -1;

	}
	if(head->next==NULL){
		return head->data;
	}
	struct node* ptr1=head;
	struct node* ptr2=head;
	while(ptr2->next!=NULL){
		if(ptr2->next->next!=NULL){
			ptr2=ptr2->next->next;
			ptr1=ptr1->next;
		}
		else{
			ptr2=ptr2->next;
			ptr1=ptr1->next;
		}
	}
	return ptr1->data;


}


void A6_Q2(void){
	insertAtLast(0);
	insertAtLast(1);
	insertAtLast(2);
	insertAtLast(3);
	insertAtLast(4);
	insertAtLast(5);
	insertAtLast(6);
	insertAtLast(7);
	insertAtLast(8);
	printf("%d",Middle_node());
	return;
}
/////////////////////////////////////////////////////////////////////////







//////////////////////////////////////////////////////////////////////////

int main(void){


	A6_Q2();
return 0;
}


