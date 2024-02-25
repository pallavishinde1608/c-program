#include<stdio.h>
#include<conio.h>
int main() 
{ static char s[251] = "The cocaine man"; 
    int i = 0 ; 
    char ch; 
    ch = s[++i]; 
    printf ("%c%d\n", ch,i); 
    ch = s[i++]; 
    printf ("%c %d\n", ch,i); 
    ch = i++[s]; 
    printf ("%c%d\n", ch, i) ; 
    ch = ++i[s] ; 
     printf ("%c%d\n", ch,i);
   getch();
}

