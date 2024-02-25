#include<stdio.h>
int main()
{
	int a[8],i,j,len,count;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	count=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
				if(a[i]-a[j]==5 || a[j]-a[i]==5)
			        {
			         	printf("(%d %d)\t",a[j],a[i]);
			         	count++;
			        }
		}
		
	}
	printf("\n");
	printf("Number of distinct pairs for  difference are : %d",count);
}
