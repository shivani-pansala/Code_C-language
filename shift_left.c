#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&n[i]);
	}
	int first=n[0];
	for(i=1;i<5;i++)
	{
		n[i-1]=n[i];
	}
	n[4]=first;
	
	for(i=0;i<5;i++)
	{
		printf("%2d",n[i]);
	}
}
