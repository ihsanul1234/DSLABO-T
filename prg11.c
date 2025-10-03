//queue using linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*ptr;
};
void main()
{
	typedef struct node NODE;
	NODE*start=NULL,*temp,*t;
	int ch,item;
	while(1)
	{
		printf("\nMENU\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				temp=(NODE*)malloc(sizeof(NODE) );
				printf("\nEnter the item:");
				scanf("%d",&item);
				temp->data=item;
				if(start==NULL)
				{
					temp->ptr=NULL;
					start=temp;
				}
				else
				{
					temp->ptr=start;
					start=temp;
				}
				break;
			case 2:
				if(start==NULL)
					printf("\nQueue is empty");
				else if(start->ptr==NULL)
				{
					temp=start;
					start=NULL;
					printf("\nDeleted item is :%d",temp->data);
					free(temp);
				}
				else
				{
					temp=start;
					t=start->ptr;
					while(t->ptr!=NULL)
					{
						temp=temp->ptr;
						t=t->ptr;
					}
					temp->ptr=NULL;
					printf("\nDeleted item is :%d",t->data);
					free(t);
				}
				break;
			case 3:
				if(start==NULL)
				{
					printf("\nQueue is empty");
				}
				else
				{
					printf("\nElements are:");
					for(t=start;t!=NULL;t=t->ptr)
					{
						printf("\t%d",t->data);
					}
				}
				break;
			case 4:
				exit(0);
			default :
				printf("\nWrong choice");
				break;
		}
	}
}
				
				
				
				
					
				
					
					
