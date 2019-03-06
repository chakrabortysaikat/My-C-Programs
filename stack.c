#include <stdio.h>
int top=0, a[100],size;

void push(int n)
{
	if(top>=size)
	printf("Stack Overflows\n");
	else
	{
		top+=1;
		a[top]=n;	
	}

}
int pop()
{
	if(top<1)
	printf("Stack Underflows\n");
	else
	{
		int element=a[top];
		top-=1;
		return element;
	}
}
main()
{
	int i,option,input,n;
	printf("Enter the size of the stack\n");
	scanf("%d",&size);
	while(1)
	{
		printf("Enter the operation you want to perform\n");
		printf("Press 1 to push elements into the stack\n");
		printf("Press 2 to pop elements from the stack\n");
		printf("Enter your option\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter the number of elements to be inserted into stack:\n");
				scanf("%d",&n);
				printf("Enter the element of stack : \n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&input);
					push(input);	
				}
				break;
			case 2:
				if(top!=0)
				{
					for(i=0;i<size-(size-n);i++)
					{
				
					printf("%d",pop());
					printf("\n");
					}
				}
				else
				pop();
				break;
		}
	}
	
}
