#include<stdio.h>
void main() {
 int i = 10;
 void *p = &i;
 printf("%f\n", *(float *)p);
}

