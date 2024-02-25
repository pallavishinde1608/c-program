#include<stdio.h>
int main()
{
int a[3][3],i,j,r,c,count=0;
printf("enter number of rows");      
scanf("%d",&r);
printf("enter number of columns");   
scanf("%d",&c);
for(i=0;i<r;i++)             
{
	for(j=0;j<c;j++)          
	{
		printf("Element [%d],[%d]: ",i,j);  //[0 0]:1 [0 1]
		scanf("%d",&a[i][j]);              
	} 
}
printf("matrix is :\n");
for(i=0;i<r;i++)           
{
	for(j=0;j<c;j++)       
	{
		printf("%d\t",a[i][j]);  
	}
	printf("\n");
}
	 for(i=0;i<r;i++)
	 {
		for(j=0;j<c;j++)
		  {
		    if(a[i][j]==0)
		     {
		     	count++;
		      }
		
	      }
	  }
	      if(count>((r*c)/2))
	          {
	      	     printf("sparse matrix\n");
		    }
		  else
		      {
		  	      printf("not sparse matrix\n");
		      }
		      printf("there are %d times of 0",count);
}
