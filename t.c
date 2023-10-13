#include<stdio.h>
#include<stdlib.h>
struct sll
{
        int data;
        struct sll *p;
};
    int main()
{
        struct sll *head=(struct sll*)malloc(sizeof(struct sll));
        head->data=10;
        head->p=NULL;

        struct sll *current=(struct sll*)malloc(sizeof(struct sll));
        current->data=10;
        current->p=NULL;
        head->p=current;

        current=(struct sll*)malloc(sizeof(struct sll));
        current->data=40;
        current->p=NULL;
        head->p->p=current;
	traverse_print(head);
}
        void traverse_print(struct sll*head)
	{
		if(head==NULL)
			printf("sll is empty");
		struct sll *temp=NULL;
		temp=head;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->p;
		}
		printf("NULL");
		struct sll* temp = head;
/* Initialize count variable  */
int count=0;
/* Traverse the linked list and maintain the count */
while(temp != NULL){
temp = temp->next;
/* Increment count variable. */
count++;
}
/* Print the total count. */
printf("\n Total no. of nodes is %d",count);
}
	}

        
