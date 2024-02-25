#include<stdio.h>
#include<conio.h>
int main()
{   static char str[ ] = "MalayalaM"; 
    char *s; 
     s = str + 8 ; 
     while (s >= str) 
     {   printf ("%c",*s); 
         s--; 
     }
     getch();
}

