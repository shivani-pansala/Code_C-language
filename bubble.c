#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[5],t;
	
	for(i=0;i<5;i++)
	{
		printf("Enter a number=");
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",n[i]);
	}
}
