#include<stdio.h>
int main()
{
	int i,j,k=1;
	printf("\n\n\n");
	
	for(i=1;i<=7;i++)
	{   k=1;
		for(j=1;j<=7;j++)
		 {    
		       
			if(j>=5-i && j<=3+i && j>=i-3 && j<=11-i)
			{
				if(j==5-i || j==3+i || j==i-3 || j==11-i)
		           	{             

			            printf("*");
			
                      }
                 else
				   {
				
            	        printf("%d",k);
            	
            	            (j>3)?k--:k++;
		            }
           }
            
        }     
		printf("\n");
	}
}

