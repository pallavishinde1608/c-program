#include<stdio.h>
int main()
{
	int a[5],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
	printf("display array values\n");
	for(i=0;i<len;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
		
	}
	
	
}
