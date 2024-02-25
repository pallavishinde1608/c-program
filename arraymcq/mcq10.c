#include<stdio.h>
int main(){
 int a[5]={10,20,30,40,50},i;
 int *ptr;
 ptr=a;
 ptr++; //0 will get 1  
 *ptr=500; //a[1]=500
 for(i=0;i<5;i++){  //0<5 1<5 
 printf("%d\n",a[i]);  //10 500 30 40 50
}
 return 0;
}
