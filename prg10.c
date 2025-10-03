//stack using linkedlist
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
		printf("\nMENU:\n1.push\n2.pop\n3.Display\n4.exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				temp=(NODE*)malloc(sizeof(NODE));
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
				{
					temp->ptr=NULL;
					start=temp;
					printf("\nDeletion is not possible");
				}
				else if(start->ptr==NULL)
				{
					temp=start;
					start=NULL;
					printf("\nPoped item is:%d",temp->data);
					free(temp);
				}
				else
				{
					temp=start;
					start=start->ptr;
					printf("\nPoped item is:%d",temp->data);
					free(temp);
				}
				break;
			case 3:
				if(start==NULL)
				{
					printf("\nStack is empty");
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
					
				
			
