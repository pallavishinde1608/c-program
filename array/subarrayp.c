#include<stdio.h>
int main()
{
	int a[8],i,len,j,sum=0,x,k;
	len=sizeof(a)/sizeof(a[0]);
	findSubarrays(a,len,x);
	printf("enter element");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter sum\n");
	scanf("%d",&x);
	for(i=0;i<len;i++)
	{
		sum=0;
		for(j=i;j<len;j++)
		{
		sum=sum+a[j];
		if(sum==x)
		{
		
		printf(a,i,j);
	}
	printf("[%d...%d]---{",i,j);
	for(k=i;k<=j;k++)
	{
		printf("%d",a[k]);
	}
	printf("}\n");
}
}
}































