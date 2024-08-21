#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no;
	printf("Enter a number=");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=no;j++)
		{
			printf("%4d",i+j-1);
		}
		printf("\n");
	}
}
