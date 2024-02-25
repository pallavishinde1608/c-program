#include<stdio.h>
int main()
{
	int a[5],i,j,len,diff;
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
	printf("\nthe given difference is:");
	scanf("%d",&diff);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]-a[j]==diff || a[j]-a[i]==diff)
			{
				printf("(%d %d)",a[i],a[j]);
			}
		}
	}
}
