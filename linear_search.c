#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n[5],key,flag=0,pos;
	
	for(i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&n[i]);
	}

    printf("Enter search value=");
    scanf("%d",&key);
    
    for(i=0;i<5;i++)
    {
    	if(n[i]==key)
    	{
    		flag =1;
    		pos=i+1;
    		break;
		}
	}
	
	if(flag==1)
	{
		printf("search number is position %d",pos);
	}
	else
	{
		printf("Not found key ");
	}
}
