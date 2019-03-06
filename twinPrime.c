/*Assignment question 1
Twin Prime : A twin prime is a pair of 2 numbers that has a prime gap of 2
example: 3-5/5-7/11-13
Question : Find the twin prime numbers within a certain range*/
#include <stdio.h>
int isprime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else 
	return 0;
}
int main()
{
	int range,i,j,diff;
	printf("Enter the range to view the list of twin prime numbers:\n");
	scanf("%d",&range);
	printf("The Twin Primes within the range %d is :\n\n",range);
	for(i=2;i<=range;i++)
	{
		for(j=2;j<=range;j++)
		{
			if(isprime(i) && isprime(j))
			{
				diff=(i-j);
				if(diff==2)
				printf("|%3d & %3d\n",j,i);
			}	
		}
	}
	return 0;
}
