#include<stdio.h>
int main()
{
  int a[2][2],i,j,r,c;
  printf("enter rows and column");
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
  		printf("[%d %d]",i,j);
  		scanf("%d",&a[i][j]);
	  }
 }	
	  printf("matrix is\n");
	  for(i=0;i<r;i++)
       {
  	     for(j=0;j<c;j++)
  	      {
  	     	printf("%d\t",a[i][j]);
  		
	      }
	      printf("\n");
	  }	
	  printf("the lower triangular matrix\n");
	  for(i=0;i<r;i++)
            {
  	          for(j=0;j<c;j++)
              	{
  	             	if(i>=j)
  	                	{
  			                 printf("%d\t",a[i][j]);
		  
  	                      	
  	                     }
                	else
                     	{
                     		
                     		printf("0");
  	                     	printf("\t");
	                    }
	                    
	            }
	            printf("\n");
	        }	
	    }
