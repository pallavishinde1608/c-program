#include<stdio.h>
int main()
{
	int a[5],i,j,temp,len,max,smax;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
    for(i=0;i<len;i++)
    {
    	for(j=i+1;j<len;j++)
    	{
    		if(a[i]>a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
	printf("array after sorting");
	for(i=0;i<len;i++)
	{
	printf("%d\n",a[i]);
	}
    max=a[0];
	for(i=0;i<len;i++)
	{
	
	if(max<a[i])
{
	smax=max;
	max=a[i];
}
}
	printf("smax =%d\n",smax);
	printf("max=%d",max);			
}
	

