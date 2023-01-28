#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void beginsert();
void lastdelete();
void display();  
int main()
{
	int choice=0;
	while(choice!=4)
	{
		printf("\n****Main Menu*****\n");	
		printf("\nChoose one option from the following list\n");
		printf("\n1.Insert at begining\n2.Delete at the Last\n3.Show\n4.Exit\n");
		printf("\nEnter your choice?\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:beginsert();
			break;
			case 2:lastdelete();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("Please enter a valid choice:");
		}
	}
}
void beginsert()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
	printf("\nEnter value\n");
	scanf("%d",&item);
	ptr->data =item;
	ptr->next=head;
	head=ptr;
	printf("\nNode inserted");	
	}
}
void lastdelete()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("\nOnly node of the list deleted..\n");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		free(ptr);
		printf("\nDeleted Node from the Last node...\n");
	}
}
void display()
{
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("Nothing to print");
	}
	else
	{
		printf("\nPrinting Values...\n");
		while(ptr!=NULL)
	    	{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		    }
	}
}

