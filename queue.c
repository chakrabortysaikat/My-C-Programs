/*Program for Queue*/
//Insertion from rear end
//Deletion rom front end
#include <stdio.h>
#include <stdlib.h>
#define max 100

int front,rear; int n;
front=-1;rear=-1; 
int a[max];
void insert(int value)
{
	if(rear>=n-1)
	printf("Queue Overflows\n");
	else
	{
		rear++;
		a[rear]=value;
	}
}
void delete()
{
	if(rear<0)
	printf("Queue underflows\n");
	else
	{
	
	front++;
	int value=a[front];
	printf("Deleted element is : %d",value);
}
}
void main()
{
	int element;char option1,option2;
	printf("Enter the number of elements of the Queue :");
		scanf("%d",&n);
	while(1)
	{
		in:
		printf("\nDo you want to insert ?(y/n) : ");
		option1=getch();
		if(option1=='y'||option1=='Y')
		{
		printf("\nEnter the element of the queue : ");
		scanf("%d",&element);
		insert(element);
		}
		else
		{
		del:
			printf("\nDo you want to delete ?(y/n): ");
			option2=getch();
			if(option2=='Y'||option2=='y')
			{
			delete();
			if(front==rear)//queue is empty
			front=rear=-1;
			goto del;
			}
			else if(option2=='N'||option2=='n')
			goto in;
	}
	}
}
