#include <stdio.h>
int main()
{
	int a[100],final[100]={0},*p,n,i,j,temp,c=0,flag=0,f=0;
	p=a;
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",p++);
	}
	p=a;
	printf("The elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p++);
	}
	//performing sorting
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	/*For removing the duplicate elements 
	in the array and the number and frequency 
	of the duplicate elements*/
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i-1]) 
		/*If the current element is 
		not same as the previous element then 
		it is inserted into array*/
		{
			flag=0;
			final[c++]=a[i];
		}
		
		else
		{
			
			flag++;
			if(flag==1)
				f++;
		}
		
	}
	printf("Number of duplicate elements is %d\n",f);
	p=a;
	printf("The array elements after removing the duplicate element is :\n");
	for(i=0;i<c;i++)
	{
		printf("%d\n",final[i]);
	}
}
