#include<stdio.h>
int main()
{
	int a[5],i,len,max,smax;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
    max=a[1];
    smax=a[0];
	printf("display array values\n");
	for(i=0;i<len;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
		 
	
	if(max<a[i])
{
	smax=max;
	max=a[i];
}
else if(smax<a[i])
{
	smax=a[i];
	
}
	printf("smax =%d",smax);
				
}
	
}
