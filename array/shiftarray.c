#include<stdio.h>
int main()
{
	int a[6],i,len,index,value;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len-1;i++)
	{
	scanf("%d",&a[i]);
    } 
	for(i=0;i<len;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
    } 
	 printf("enter index and value");
    scanf("%d%d",&index,&value);
   for(i=len-2;i>=index;i--)
    {
		a[i+1]=a[i];
		
	}
	  a[index]=value;
			
		for(i=0;i<6;i++)
		{
		     printf("a[%d]=%d\n",i,a[i]);
		 }
		 		
}
