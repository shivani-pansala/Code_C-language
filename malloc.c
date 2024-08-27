#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,a[n];
	
	printf("Enter a number=");
	scanf("%d",&n);
	
    ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter a value=");
		scanf("%d",(ptr+i));
	}
	
		for(i=0;i<n;i++)
	{
		printf("\n %d",*(ptr+i));
	}
}
