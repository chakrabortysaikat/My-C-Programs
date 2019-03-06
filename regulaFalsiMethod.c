/*REgula Falsi Method */

#include <stdio.h>
#include <math.h>
double f(double x)
{
	return ((x*x*x)-(4*x)-9);
	//return ((x*exp(x)-acos(x)));
}
main()
{
	double x0=0,x1=0.1,x2; int count=0;
	while(f(x1)*f(x2)>0) //Finding the range of root
	{
		x1+=0.1;
		x2+=0.1;
	}
	x2=((x0*f(x1)-(x1*f(x0))))/(f(x1)-f(x0));
	printf("-------------------------------------------------\n");
	printf("|Iteration|\tx0      |  x1       |\tx2      |\n");
		printf("-------------------------------------------------\n");
	while(fabs(x2-x1)>0.0001)
	{
		if(f(x2)<0)
		x0=x2;
		else
		x1=x2;
		count++;
		printf("|  %2d     |   %lf  | %lf  | %lf  |\n",count,x0,x1,x2);
		x2=((x0*f(x1)-(x1*f(x0))))/(f(x1)-f(x0));
	}
		printf("-------------------------------------------------\n");
		printf("Therefore the final root by Regula falsi method is =%.4lf",x2);
}
