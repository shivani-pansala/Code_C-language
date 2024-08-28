#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,*ptr1;
	
	printf("Enter a number=");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	ptr1=(int*)calloc(n,sizeof(int));
	printf("\n malloc memory allocation");
	free(ptr);
    printf("\n calloc memory allocation");
	free(ptr1);
	
}
