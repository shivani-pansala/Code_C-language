#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no;
	int count=0;
	printf("Enter a number=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		count++;
	}
	if(count==2)
    {
    	printf("IT is prime number");
	}
	else
	{
		printf("It is not prime number");
	}
	
}
