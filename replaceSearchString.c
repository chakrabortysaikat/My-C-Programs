/*Assignment Program 54
Question : Write a c program for replacing string within a given string after search for a string also count the occurance of the string*/

#include <stdio.h>
#include <string.h>
main()
{
	char str[100],search[20],replace[20],word[20],*p,*q;
	printf("Enter a string within 100 characters\n");
	gets(str);
	printf("\nEnter the string to be searched:");
	gets(search);
	printf("\nString to be replaced by ? :");
	gets(replace);
	int c=0;
	q=str; p=str;
	while(q!='\0')
	{
		if(*p!=' ')
		word[c++]=*p;
		else
		{
			if(strcomp(replace,word)==1)
			strcopy(replace,word);
		}
		p++;
		q++;	
	}
}

