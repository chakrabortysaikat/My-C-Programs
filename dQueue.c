/*Double ended queue*/
#include <stdio.h>
#include <stdlib.h>
#define max 100
int n;
int rl=-1; int rr=n;
int fl=-1; int fr=n; 
int a[max];
void insertL(int value)
{
	if(rl>=ceil(n/2)-1)
	printf("Queue Overflows\n");
	else
	{
		rl++;
		a[rl]=value;
	}
}
void insertR(int value)
{
	if(rr<ceil(n/2))
	printf("Queue Overflows\n");
	else
	{
		rr--;
		a[rr]=value;
	}
}
void deleteL()
{
	if(fl<0)
	printf("Queue underflows\n");
	else
	{
	
	fl++;
	int value=a[fl];
	printf("Deleted element is : %d",value);
}
void deleteR()
{
	if(rf>n)
	printf("Queue underflows\n");
	else
	{
	
	rf++;
	int value=a[rf];
	printf("Deleted element is : %d",value);
}

main()
{
	int elementL,elementR;char option1,option2;
	printf("Enter the number of elements of the Queue :");
		scanf("%d",&n);
	while(1)
	{
		in:
		printf("\nDo you want to insert ?(y/n) : ");
		option1=getch();
		if(option1=='y'||option1=='Y')
		{
			printf("\nDo you want to insert from left? else select n if you want to insert from right(y/n) : ");
			int select=getch();
			if(select=='y'||select=='Y')
			{
				printf("\nEnter the element from left of the queue : ");
				scanf("%d",&elementL);
				insertL(elementL);
			}
			else
			{
				printf("\nEnter the element from right of the queue : ");
				scanf("%d",&elementR);
				insertR(elementR);
			}
		}
		else
		{
		del:
			printf("\nDo you want to delete ?(y/n): ");
			option2=getch();
			if(option2=='Y'||option2=='y')
			{
				printf("\nDo you want to delete from left? else select n if you want to delete from right(y/n) : ");
				int select=getch();
				if(select=='y'||select=='Y')
				deleteL();
				else
				deleteR();
			goto del;
			}
			else if(option2=='N'||option2=='n')
			goto in;
		}
	}
}

