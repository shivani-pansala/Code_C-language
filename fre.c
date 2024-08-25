#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no[5],key,count=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&no[i]);
	}
	
	printf("Enter a key=");
	scanf("%d",&key);
	
	for(i=0;i<5;i++)
	{
		if(no[i]==key)
		{
			count++;
		}
	}
	printf("%d",count);
}
