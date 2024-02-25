#include<stdio.h>
#include<conio.h>
int main() 
{   static char str[ ] = "Limericks"; 
     char*s; 
     s = &str[6] - 6 ; 
     while (*s) 
      printf ("%c", *s++); 
   getch();
}

