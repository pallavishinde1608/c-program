#include<stdio.h>
int main()
{
	int a[6],i,len,skey,flag=0;
	len=sizeof(a)/sizeof(a[i]);
	printf("enter array value\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display array\n");
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
		
	}
	//search logic
	printf("enter search key\n");
	scanf("%d",&skey);
	for(i=0;i<len;i++)
	{
		if(a[i]==skey)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("value found");
	}
	else
	{
		printf("value not found");
	}
}
