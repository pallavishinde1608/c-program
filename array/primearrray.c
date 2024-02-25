#include<stdio.h>
int main()
{
	int a[10],len,i,count,j;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display prime array value\n");
	for(i=0;i<len;i++)
	{
			count=0;
  	       for(j=1;j<=a[i];j++)
  	          {
  	            	if(a[i]%j==0)
  		              {
		  
  	                    	count++;
  		
	                      }
               }
           
            if(count==2)
             {
                   printf("%d\n",a[i]);
				
				
		      }
		
	}
	
}
