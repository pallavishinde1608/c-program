#include<stdio.h>
int main(){
 int  i; 
 static int a[5]; 
 for (i = 0; i <=4; i++) 
 printf ("%d\t%d\n", i,a[i]);
 return 0;
}

