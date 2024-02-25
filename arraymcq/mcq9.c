#include<stdio.h>
int main(){
 int a[5]={10,20,30,40,50},i;
 int *ptr;
 ptr=a;
 for(i=0; i<5;i++){ //0<5
 *ptr=*ptr+10;    //10+10=20 20+10 30+10 40+10  50+10
 printf("%d\n",a[i]); //20 30 40 50 60
 ptr++;
}
 return 0;
}
