#include<stdio.h>
#include<conio.h>
int main()
{
	char  s1[20] ;
	char s2[20];
	printf("Enter string: ");
	scanf("%s",s1);
	printf(" \n %s",strupr(s1));
    printf("%s",strlwr(s1));	
    strcpy(s2,s1);
    puts(s1);
    puts(s2);
    
	return 0;	
         
		
}
