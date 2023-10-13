#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

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
	
	print_traverse_data(head);
	
}
void print_traverse_data(struct node *head)
{
		struct node *temp = head;
		if(head==NULL)
			printf("Linked list is empty");
		int c = 0;
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			c = c+ 1;
			temp = temp->link;
		}
		printf("\n%d\n ",c);
        }


