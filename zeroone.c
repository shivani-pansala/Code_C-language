#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%2d",j%2);
//			printf("%2d",(i*j)%2);
//			printf("%2d",(i+j)%2);
		}
		printf("\n");
	}
}
