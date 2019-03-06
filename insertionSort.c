/*Insertion sort*/
#include <stdio.h>
main()
{
	int arr[5],i,k,temp,ptr;
	printf("Enter the elements of the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(k=1;k<5;k++)
	{
		temp=arr[k];
		ptr=k-1;
		while(temp<arr[ptr])
		{
		arr[ptr+1]=arr[ptr];
		ptr=ptr-1;	
		}
		arr[ptr+1]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d  ",arr[i]);
	}	
	
}
