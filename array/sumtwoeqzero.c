#include<stdio.h>
int main()
{
	int a[5],len,i,temp,j;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter values\n");
	for(i=0;i<len;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	
    }
    for(i=0;i<len;i++)
    {
    	a[i]=a[i]+a[i+1];
    	if(a[i])
	}
		 
	
}
