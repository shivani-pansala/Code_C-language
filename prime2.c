#include<stdio.h>
#include<conio.h>
void main()

{
	int i,no;
    boolean flag=True;
	
	printf("Enter a number=");
	scanf("%d",&no);
	
	if(no==1)
	{
		printf("It is not prime");
	}
	else if
	{
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			flag=False;
		}
		if(flag==Flase)
		{
			printf("It is not prime number");
		}
		else
		{
			printf("It is prime number");
		}
	}
}
