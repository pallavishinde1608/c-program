#include <stdio.h>
int main() 
{
   int n, i, j;
   for(i = 1; i<=6; i++) //1    2   3
   {
      for(j = 1; j<=(6-i); j++)  //1    
	   { 
         printf(" ");
      }
      if(i == 1 || i == 6)
	   { 
         for(j = 1; j<=i; j++)   //1
		   {
            printf("* ");        //
         }
      } 
	  else 
	  {
         printf("*"); 
         for(j = 1; j<=2*i-3; j++) 
		   { 
            printf(" ");
         }
         printf("*");
}
printf("\n");
}
}

