#include<stdio.h>
int main()
{
	int a[10],i=0,j=0,len,sum=0,right,left;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter element");        //38 44 63 -51 -35 19 84 -69 4 -46 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
   int	minsum=a[0]+a[1];
   
	for(i=0;i<len;i++)
	{	
         	sum=0;
		for(j=i+1;j<len;j++)
		{
	
			sum=a[i]+a[j];
			if(sum<0)
		        {
                  sum*=(-1);
			                
				}	if(minsum>sum)
		            	{
		            		
			              minsum=sum;
			               left=i;
			                 right=j;
		
	                   }
	       
	    }
	}

		printf("\nminimum sum of [%d %d] is %d\n",a[left],a[right],minsum);
	
}
