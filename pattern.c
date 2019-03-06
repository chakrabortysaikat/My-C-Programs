/*
pattern:
1   1
12 21
12321
12 21
1   1
*/
#include <stdio.h>

main()
{
	int level,i,j;
	printf("Enter the odd level\n");
	scanf("%d",&level);
	for(i=1;i<=(level/2)+1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d  ",j);
		}
		for(j=1;j<=level-(2*i);j++)
		{
			printf("   ");
		}
		for(j=i;j>=1;j--)
		{
			if(j!=(level/2)+1)
			printf("%d  ",j);
		}
		printf("\n");
	}
	for(i=level/2;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d  ",j);
		}
		for(j=level-(2*i);j>=1;j--)
		{
			printf("   ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d  ",j);
		}
		printf("\n");
	}
}
