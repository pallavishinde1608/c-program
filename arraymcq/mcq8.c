#include<stdio.h>
int main(){
int i,j,k;
i=j=k=1;
int a[5]={10, 20,30,40,50};
int b=a [1]; //20
b+=10;   //b=20+10==>30
a[i+1]=--b+1;  //a[2]=29+1==>28
int c=a[j++];  //a[1++]==20
int d=a[j+1];  //a[2+1]=40
printf("B= %d\tC=%d\tD=%d\n",b,c,d); //29 20 40
return 0;
}

