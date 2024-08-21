#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[2][3][4];
	int i,j,k;
	for(i=1;i<2;i++)
	{
		for(j=1;j<3;j++)
		{
				printf("enter number:");
			for(k=1;k<4;k++)
			scanf(" %d ",&arr[i][j]);
		}
	}
		for(i=1;i<3;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
