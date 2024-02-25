#include<stdio.h>
int main()
{
	int a[10],i,len;
	len=sizeof(a)/sizeof(a[i]);
	printf("enter values");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	  { 

         if(i>=4)
         
      {
	 
	 	printf("#");
	 	
    	}   
		else
		{
			printf("%d",a[i]);
		}
	
}
}
