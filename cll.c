#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	struct node{
	int data;
	struct node *next;
	};
	struct node *head=0, *temp=0;
	int ch;
	printf("1 to insert");
	scanf("%d",&ch);
	while(ch==1){
		struct node *new_node=(struct node*)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&new_node->data);
		if(head==0){
		head=temp=new_node;
		}
		else{
			temp=new_node;
			new_node->next=head;
			
		}
		printf("Press 1 to continue");
	    scanf("%d",&ch);
	
	}
	
	printf("%d--->",head->next);
}
