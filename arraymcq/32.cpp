#include<stdio.h>
int main()
{
 int arr[] = { 0,1,2,3,4}; 
  int i, *p; 
  for (p = arr, i = 0 ; p + i <= arr + 4 ; p++, i++) //0,0;0+0<=0+4  1,1;2<=0+4;
     printf ("%d\t",*(p + i)) ; //0+0=0=0  1+1=2=2 4
	return 0;
}

