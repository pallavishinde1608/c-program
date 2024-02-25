#include<stdio.h>
int main()
{
	int a[8],i,len,x;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<len;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("enter celling element");
	scanf("%d",&x);
	for(i=0;i<len;i++)
	{
		if(a[i]>=x)
		{
		    a[i]=x;
		}
		if(a[i]<x)
		{
			a[i]=x;
		}
		
	}
	printf()
	}
