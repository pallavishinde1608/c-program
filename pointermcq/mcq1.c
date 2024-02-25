#include<stdio.h>
void main()
{ int i = 10;
  void *p = &i;   //int *p = &i
 printf("%d\n", (int)*p);  //10
}
