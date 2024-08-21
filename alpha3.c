#include<stdio.h>
#include<conio.h>
void main()
{
	int c,s;
	char ch='A';
	for(c=1;c<=5;c++)
	{
		for(s=1;s<=c;s++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
