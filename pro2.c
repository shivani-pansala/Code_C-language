#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,no;
	printf("Enter a number=");
	scanf("%d",no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
	}
}
