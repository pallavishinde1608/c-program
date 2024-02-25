#include<stdio.h>
int main()
{
	int a[9],i,j,i1,j1,len,max,sum;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);  
	}
	printf("\n");
	max=a[0];
	for(i=0;i<len;i++)
	{
		sum=a[i];
		 for(j=0;j<len;j++)
		 {
		 	sum+=a[j];
		 	if(sum>max)
		 	{
		 		max=sum;
		    }
		 }
	}
		 printf("%d",max);
}
