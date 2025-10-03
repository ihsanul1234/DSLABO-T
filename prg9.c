//doubly linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
void main()
{
	int ch,no;
	typedef struct node NODE;
	NODE *start=NULL,*temp,*p,*t;
	while(1)
	{
		printf("\nMENU\n1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Display\n6.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				temp=(NODE*)malloc(sizeof(NODE));
				printf("Enter the No: ");
				scanf("%d",&no);
				temp->data=no;
				if(start==NULL)
				{
					temp->prev=NULL;
					temp->next=NULL;
					start=temp;
				}
				else
				{
					temp->next=start;
					start->prev=temp;
					temp->prev=NULL;
					start=temp;
				}
				break;
			case 2:
					temp=(NODE*)malloc(sizeof(NODE));
					printf("Enter the no: ");
					scanf("%d",&no);
					temp->data=no;
					if(start==NULL)
					{
						temp->prev=NULL;
						temp->next=NULL;
						start=temp;
					}
					else
					{
						p=start;
						while(p->next!=NULL)
						{
							p=p->next;
						}
						p->next=temp;
						temp->prev=p;
						temp->next=NULL;
					}
					break;
			case 3:
				if(start==NULL)
				{
					printf("Deletion is not possible");
				}
				else if(start->next==NULL)
				{
					temp=start;
					start=NULL;
					printf("Deleted element is: %d",temp->data);
					free(temp);
				}
				else
				{
					temp=start;
					start=temp->next;
					start->prev=NULL;
					printf("Deleted element is : %d",temp->data);
					free(temp);
				}
				break;
			case 4:
				if(start==NULL)
				{
					printf("Deletion not possible");
				}
				else if(start->next==NULL)
				{
					temp=start;
					start=NULL;
					printf("Deleted element is : %d",temp->data);
					free(temp);
				}
				else
				{
					temp=start;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					t=temp->prev;
					t->next=NULL;
					printf("Deleted element is : %d",temp->data);
					free(temp);
				}
				break;
			case 5:
				if(start==NULL)
				{
					printf("No elements");
				}
				else
				{
					printf("\nElements are :");
					for(p=start;p!=NULL;p=p->next)
					{
						printf(" %d",p->data);
					}
				}
				break;
			case 6:
				exit(0);
		}
	}
}	
				
							
					
