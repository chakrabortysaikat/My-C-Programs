#include <stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int combination(int r,int c)
{
return fact(r)/(fact(c)*fact(r-c));
}
main()
{
	int i,j,level,k;
	printf("ENTER THE LeVEL :\t");
	scanf("%d",&level);
	
	/*pascal TRiangle*/
	printf("\nThe Pascal TRiangle\n\n");
	for(i=1;i<=level;i++)
	{
		for(k=level-i;k>=0;k--)
		printf("   ");// 3 spaces and %6d gives the given figure
		for(j=1;j<=i;j++)
		{
			printf("%6d",combination(i-1,j-1));
		}
		printf("\n");
		
	}
	printf("\nThe Inverted Pascal TRiangle\n\n");
	
	/*Inverted Pascal TRiangle*/
	for(i=level;i>0;i--)
	{
		for(k=0;k<level-i;k++)
		printf("   ");
		for(j=1;j<=i;j++)
		{
			printf("%6d",combination(i-1,j-1));
		}
		printf("\n");
		
	}
	printf("\nRight handed pascal triangle\n\n");
	/*Right handed pascal triangle*/
	for(i=1;i<=level;i++)
	{
		for(k=level-i;k>=0;k--)
		printf("      "); //6spaces and %6d gives right sided triangle
		for(j=1;j<=i;j++)
		{
			printf("%6d",combination(i-1,j-1));
		}
		printf("\n");
	}
}
