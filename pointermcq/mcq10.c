#include<stdio.h>
int main()
{ char *p = NULL;
 char *q = 0;
 if (p)         //false
 printf(" p ");
else
 printf("nullp");//---
if (q)           //0
 printf("q\n");
else
 printf(" nullq\n");//----
}
