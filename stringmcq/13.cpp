#include<stdio.h>
#include<conio.h>
int main() 
{ 
  static char arr[ ] = "Pickpocketing my peace of mind..";
   int i; 
   printf ("%c\n",*arr); 
   arr++; 
   printf ("%c\n",*arr);
   getch();
}

