/*Selection Sort*/
#include <stdio.h>
int main()
{
	int a[100],n,i,j,min,p;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;	
			}
		}
		p=a[i];
		a[i]=a[min];
		a[min]=p;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
