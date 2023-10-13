#include<studio.h>
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

	current=(struct sll *current=(struct sll*)malloc(sizeof(struct sll));
	current->data=40;
	current->p=NULL;
	head->->p=current;

	printf("%d->%d->%d",head->data,head->p->data,head->p->p->data);
}#include<studio.h>
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

