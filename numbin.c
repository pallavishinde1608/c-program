#include<stdio.h>
int main()
{
	int flag=1,i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j<=i ||  j>=11-i)
			{
			
			          if( j<=5 && j%2==0)
			            {
						
							
                            printf("%d",k);
		                
		            }
			           else
						   {
						   
		                   	printf("%d",k);
					        
					    
					 }
					 
				}
				else
				{
					printf(" ");
					
			      }
			    
	          
			(j>5)?k--:k++;
			
			
		}
		
				
         	printf("\n");			 
						  
	}
 }
		    
		
	

