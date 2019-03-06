/*Second highest of three numbers*/
#include <stdio.h>
int secondLargest(int a,int b,int c)
{
	return (a>b)?((b>c)?b:(a>c)?c:a):((a>c)?a:(b>c)?c:b);
}
int main()
{
	int a,b,c,sl;
	printf("Enter the first value :");
	scanf("%d",&a);
	printf("\nEnter the second value:");
	scanf("%d",&b);
	printf("\nEnter the third value:");
	scanf("%d",&c);
	sl=secondLargest(a,b,c);
	printf("The second largest of three values is: %d",sl);
	return 0;
}

