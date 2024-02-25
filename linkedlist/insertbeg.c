#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

void insert(){
	int Node;
	if(head==NULL){
		head=(struct Node*)malloc(sizeof(Node));
		printf("\nEnter data in node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else{
		struct Node *temp;
		printf("Enter data in new node\n");
		temp=(struct Node*)malloc(sizeof(Node));
		scanf("%d",&temp->data);
		temp->next=head;
		head=temp;
	}
}
void display(){
	struct Node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int choice;
int main(){
	
	do{
		 printf("1:INSERT AT BEGINING\n");
		 printf("2:View\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			default:
				printf("Wrong choice");
		}
		
	}while(choice!=3);
	
	return 0;
}

