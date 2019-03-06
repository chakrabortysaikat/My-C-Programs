#include <stdio.h>
double f(double x)
{
	return ((x*x*x)-(3*x)+1);
}
double f1(double x)
{
	return ((3*x*x)-3);
}
main()
{
	int count=0;
	double a=0,b=0.1,c=0;
	while(f(a)*f(b)>0)
	{
		a+=0.1;
		b+=0.1;
	}
	c=a-(f(a)/f1(a));
	printf("-------------------------------------\n");
	printf("|Iteration|\tA      |  C       |\n");
	printf("-------------------------------------\n");
	while(fabs(c-a)>0.0001)
	{
		a=c;
		c=a-(f(a)/f1(a));
		count++;
		printf("|%6d   |  %lf  | %lf |\n",count,a,c);
	}
		printf("-------------------------------------\n");
		printf("Therefore the final root by Newton Rapson method is =%.4lf",c);
}


