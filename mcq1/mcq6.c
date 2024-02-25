#include <stdio.h>
 void main()
 {
 int a = -5;
 int k = (a++, ++a);
 printf("%d %d\n",a,k);
 }

