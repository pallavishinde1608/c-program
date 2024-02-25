#include<stdio.h>
int main()
{
	int i,j,k=1,l=0,flag=0,f;
	for(i=1;i<=5;i++)
	{    
	f=0;
	flag=0;
		for(j=1;j<=11;j++)
		{    
			if(i>=j||j>=12-i)
			{
				if(i>=j&&flag||j>=i-11&&f&&i<=5)
				{
				
						printf("1");
						flag=0;
						 if(j>=4)
			  			f=0;
				}
	            else{
	            	printf("0");
	            	 if(j>=4)
	            	f=1;
	            	 flag=1;
			     	}
	                  
			}
 
		 else
		 {
		 
		    
	    	if(i==5)
			printf("0");
			else
		    printf("-");
	
	     }
	

	}
	
		printf("\n");
	}
}

