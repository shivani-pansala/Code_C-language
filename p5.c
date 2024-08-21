#include<stdio.h>
#include<conio.h>
void main()
{
	char  s1[20] ;
	char s2[10];
	printf("Enter string: ");
	scanf("%s",s1);
	printf(" \n %s",strupr(s1));
    printf("%s",strlwr(s1));	
    s2 = copyString(s1);
    printf("%s", s2);	
         
		
}
