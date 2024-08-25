#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no[5],del,flag=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&no[i]);
	}
	printf("delete value=");
	scanf("%d",&del);
	
	for(i=0;i<5;i++)
	{
		if(no[i]==del)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Value not found");
	}
	else
	{
		for(;i<5;i++)
		{
           no[i]=no[i+1];			
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",no[i]);
	}
	
}
