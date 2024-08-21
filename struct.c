#include<stdio.h>
#include<conio.h>

  struct std{
     int id;
     char name;
  };
  
  void main()
  {
  	 struct std s1;
  	  
  	  s1.id=1;
  	  s1.name='s';
  	  display();
  	 	  
 }   
 
 void display(struct std s1 )
 {
 	 printf(" it is ID : %d",s1.id);
    printf(" it is name: %c",s1.name);  
 }
