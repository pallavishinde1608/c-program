#include<stdio.h>
int main(){
int a[]={10,20,30,40,50};
int *ptr;
ptr=a;
ptr=ptr+2; //a[0+2]=a[2]
int *ptr1;
ptr1=ptr;//a[2]==30
printf("%d\n",*ptr1);//30
return 0;
}
