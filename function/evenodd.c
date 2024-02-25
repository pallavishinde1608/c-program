#include<stdio.h>
int findEvenOdd(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		
     	if(a[i]%2==0)
	     {
	     	printf("%d",a[i]);
           	}
    	else
	     {
	    	printf("%d",a[i]);
	      }
  }
}
int main()
{
	int a[5]={1,2,3,4,5};
//	int x=findEvenOdd(a[i]);
    findEvenOdd(a[i]);
	
}
