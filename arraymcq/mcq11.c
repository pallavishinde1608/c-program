#include<stdio.h>
int main(){
 int a[5]={10,20,30,40,50},i;
 int *ptr,*ptr1;
 ptr=a;
 ptr1=ptr;
 *ptr1=100; //a[0]=100
 ptr=ptr+2;// a[i]=a[2]
 *ptr=600;  //a[2]=600
 ptr1=ptr1+2;//a[2]
 *ptr1=700;//a[2]=700
 printf("display the array values\n");
 for(i=0; i<5; i++){
 printf("%d\n",a[i]);
 }
 return 0;
}

