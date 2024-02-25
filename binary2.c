#include<stdio.h>
int main()
{
	int flag=0,i,j;
	for(i=1;i<=5;i++)
	{flag=0;
		for(j=1;j<=10;j++)
		{
			if(j<=i)
			{
			
			   (j<=i)?printf("0"):printf("1");
		     }
		   else if(j>=11-i)
			 
			 {
			 	if(flag)
					  {
					  	printf("1");
					  	flag=0;
		              	}
						  else
						  {
						  	printf("0");
						  	flag=1;
				           }
					}
						   else
						   
						   	printf(" ");
					
				}
				
					printf("\n");			 
						  
	}
 }
		    
		
	

