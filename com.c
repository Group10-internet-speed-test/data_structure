#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void begining(struct node *head);
void print_traverse_data(struct node *head);

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));	
	head->data = 100;
	head->link=NULL;
	
	struct node *current = (struct node*)malloc(sizeof(struct node));
	current->data = 200;
	current->link=NULL;
	head->link = current;
	
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 300;
	current->link = NULL;
		
	head->link->link = current;
	

	begining(head);
	
		
}
void print_traverse_data(struct node *head)
{
		struct node *temp = NULL;
		
		insert();
		if(head==NULL)
			printf("Linked list is empty");
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		
        }
void begining(struct node *head):
{
	
	struct node *temp = head;
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new -> data = 500;
	new -> link = NULL;
	
	new -> link = head;
	
	temp = new;
	
}
        
int insert();
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new ->data = 0;
	new -> link = NULL;
	return 
}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
