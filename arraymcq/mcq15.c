#include<stdio.h>
int main(){
 int a[5], i; 
 static int b[5]; 
 for (i = 0; i < 5; i++) //0 0<5  1<5 2<5
 printf ("%d\t%d\t%d\n", i,a[i],b[i]); //0  1  2 3 4  
 return 0;
}

