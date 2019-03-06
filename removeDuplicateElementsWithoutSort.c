#include <stdio.h>
main()
{
	int a[100],b[100]={0},frequency[100],i,j,n,c=0;
	printf("Enter the number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				a[j]=-9999;
				count++;
			}
		}
		if(count>0)
		{
			if(a[i]>0)
			printf("The frequency of Duplicate element %d is : %d\n",a[i],count+1);
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		b[c++]=a[i];
	}
	printf("\nThe elements of the array after removing the duplicate element is:\n");
	for(i=0;i<n;i++)
	{
		if(b[i]!='\0')
		printf("%d  ",b[i]);
	}
	
}
