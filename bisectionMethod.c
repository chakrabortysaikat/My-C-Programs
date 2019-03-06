#include <stdio.h>
float f(float x)
{
	return ((x*x*x)-x-4);
}
main()
{
	float a=0,b=0.1,c;int count=0;
	while(f(a)*f(b)>0)
	{
		a+=0.1;
		b+=0.1;
	}
	c=(a+b)/2;
	printf("-------------------------------------------------\n");
	printf("||Iteration||\tA      ||  B       ||\tC      ||\n");
	printf("-------------------------------------------------\n");
	while(fabs(c-a)>0.0001)
	{
		if(f(c)>0)
		b=c;
		else
		a=c;
		count++;
		printf("||\t  %d|| %f || %f || %f ||\n",count,a,b,c);
		c=(a+b)/2;
	}
	printf("-------------------------------------------------\n");
	printf("Therefore the final root by bisection method is =%f",c);
	
}
