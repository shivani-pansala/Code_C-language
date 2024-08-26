#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter a value=");
		scanf("%d",&n[i]);
	}
	
	int last=n[4];
	
	for(i=4;i>=0;i--)
	{
		n[i+1]=n[i];
	}
	n[0]=last;
	
	for(i=0;i<5;i++)
	{
		printf("%2d",n[i]);
	}
}
