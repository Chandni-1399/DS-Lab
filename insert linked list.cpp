#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void beginsert();
void display();  
int main()
{
	int choice=0;
	while(choice!=3)
	{
		printf("\n****Main Menu*****\n");	
		printf("\nChoose one option from the following list\n");
		printf("\n1.Insert at begining\n2.Show\n3.Exit\n");
		printf("\nEnter your choice?\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:beginsert();
			break;
			case 2:display();
			break;
			case 3:exit(0);
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

