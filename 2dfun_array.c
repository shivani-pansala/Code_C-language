#include<stdio.h>

void display(int arr[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}
}

int  main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	display(arr);
	
}


