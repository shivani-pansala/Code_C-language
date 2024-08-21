#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,no,x;
	printf("Enter a number:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		x=i;
		for(j=1;j<=no;j++)
		{
			printf("%4d",x);
			x+=no;
		}
		printf("\n");
	}
}
