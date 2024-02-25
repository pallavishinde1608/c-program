#include<stdio.h>
int main()
 { 
 int i = 0, j = 1;
 int *a[] = {&i, &j};  //{0,1}
 printf("%d", (*a)[0]); //0
 return 0;
 }
