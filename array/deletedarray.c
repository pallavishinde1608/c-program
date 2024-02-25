#include<stdio.h>
int main()
{
	int a[5],i,len,index;
	len=sizeof(a)/sizeof(a[0]);
	printf("enter value");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    } 
	for(i=0;i<len;i++)
	{
		printf("\ta[%d]=%d\n",i,a[i]);
    } 
	 printf("enter deleted index");
    scanf("%d",&index);
    
       if(index>=len+1)
       {
       	printf("not deleted");
	   }
	   else
              {
              	for(i=index;i<len-1;i++)
              	{
				
		         a[i]=a[i+1];
	          	for(i=0;i<len-1;i++)
	                 	{
	                 		
		               printf("a[%d]=%d\n",i,a[i]);
		           
				   }  
			     } 
		}
}
		 		

