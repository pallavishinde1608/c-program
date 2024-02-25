#include<stdio.h>
int main()
{ static int a[] = {2,4,6,8,10}; 
   for(int i=0;i<=4; i++){ //
        *(a+i)=a[i ] + i[a];//a[0]+i[0]=2+2 =4  a[1]+i[1]=4+4=8
    printf ("%d\t", *(i + a));//4 8 12 16 20
  }
  return 0;
}

