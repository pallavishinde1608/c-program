#include<stdio.h>
int main()
{
	int a[6],i,j,len,sum;
	len=sizeof(a)/sizeof(a[0]);
	printf("eneter element");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
    printf("\nenter sum");
    scanf("%d",&sum);
    for(i=0;i<len;i++)
    {
    	for(j=i+1;j<len;j++)
    	{
    	
             	if(sum==a[i]+a[j])
		
		        {
		          printf("[%d %d]",i,j);
		
	             }
	             
	    }
    }
}


