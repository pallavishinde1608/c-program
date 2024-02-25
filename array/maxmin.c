#include<stdio.h>
int main()
{
	int a[5],i,len,max,min;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
    max=a[0];
    min=a[0];
	printf("display array values\n");
	for(i=0;i<len;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
		 
	
	if(max<a[i])
{
	max=a[i];
}
    if(min>a[i])
    {
    	min=a[i];
	}
}
	printf("max =%d\n",max);
	printf("min=%d",min);		
}
