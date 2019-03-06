/*Program for Queue*/
//Insertion from rear end
//Deletion rom front end
#include <stdio.h>
#include <stdlib.h>
#define max 100

int front=-1,rear=-1,count=0; int n;
int a[max];
void insert(int value)
{
	if(count>=n)
	printf("Queue Overflows\n");
	else
	{
		rear=(rear+1)%n;
		a[rear]=value;
		count++;	
	}
	
}
void delete()
{
	if(count==0)
	printf("Queue underflows\n");
	else
	{
	
	front=(front+1)%n;
	int value=a[front];
	count--;
	printf("Deleted element is : %d",value);
}

}
void main()
{
	int element;char option1,option2;
	printf("Enter the number of elements of the circular Queue :");
		scanf("%d",&n);
	while(1)
	{
		in:
		printf("\nDo you want to insert ?(y/n) : ");
		option1=getch();
		if(option1=='y'||option1=='Y')
		{
		printf("\nEnter the element of the circular queue : ");
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
			
			goto del;
			}
			else if(option2=='N'||option2=='n')
			goto in;
	}
	}
}
