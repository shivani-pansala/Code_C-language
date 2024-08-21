#include<stdio.h>
#include<conio.h>
void main()
{
  int a,s,b;
  
  for(a=1;a<=5;a++)
  {
  	for(s=5;s>=a;s++)
  	{
  		printf(" ");
	}
	   for(b=1;b<=a;b++)
	   {
	   	   printf("*");
	   }
	   printf("\n");
  }
  
  for(a=5;a>=1;a--)
  {
  	for(s=5;s<=a;s--)
  	{
  		printf(" ");
	}
	  for(b=1;b<=a;b++)
	  {
	  	printf("*");
	  }
	  printf("\n");
  }
	
}
