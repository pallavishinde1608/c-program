#include<stdio.h>
void main()
{
	int calSum(int[]);
	int a[5],i,r;
	printf("enter value");
	for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);//10 20 30 40 50
}
     r=calSum(a);
     printf("result = %d\n",r);//10 30 60 100 150
}
int calSum(int a[])
     {
	    int s=0,i;
	    for(i=0;i<5;i++)
       	{
        	s=s+a[i]; //0+10 	
    	}
	return s;  
    }
