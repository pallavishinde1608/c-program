#include<stdio.h>
int main()
{
	int a[5],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 

	printf("even numbers are \n");
	         for(i=0;i<len;i++)
	             {	
            	if(a[i]%2==0)
	                {
                 	printf("%d\t",a[i]);
                     }
	              }
	  printf("\nodd numbers are \n");
                 for(i=0;i<=len;i++)
                   {
                    if(a[i]%2==1)
                          {
   	                         printf("%d\t",a[i]);
	                        }
                     }
   
   	 
   	
}
	

