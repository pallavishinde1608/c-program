
#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j,r1,c1,r2,c2,flag=1;
printf("enter number of rows and column first matrix");      
scanf("%d%d",&r1,&c1);
printf("enter number of rows and columns second");   
scanf("%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{  
printf("matricec can be compared\n");

for(i=0;i<r1;i++)             //0<3...
{
	for(j=0;j<c1;j++)          //0<3...
	{
		printf("first matrix Element [%d %d]: ",i,j);  
		scanf("%d",&a[i][j]);              
	} 
}
printf(" first matrix is :\n");
for(i=0;i<r1;i++)         
{
	for(j=0;j<c1;j++)       
	{
		printf("%d\t",a[i][j]);  
	}
	printf("\n");
	
}
for(i=0;i<r1;i++)           
{
	for(j=0;j<c1;j++)          
	{
		printf("second matrix Element [%d %d]: ",i,j);
		scanf("%d",&b[i][j]);              
	} 
}
printf("second matrix is :\n");
for(i=0;i<r2;i++)         
{
	for(j=0;j<c2;j++)       
	{
		printf("%d\t",b[i][j]);  
	}
	printf("\n");
	
}

   for(i=0;i<r2;i++)   //0<3..
    {
	for(j=0;j<c2;j++)  //0<3..
	   {
		   if(a[i][j]!=b[i][j])     
		     {
		      	flag=0;
	             break;
		     }
       }
   }
}
else
{
	printf("cannot compared\n");
	  exit(1);
}
         if(flag==1)  
        {
	          printf("the matrix is equal");
         }
       else
           {
	         printf("the matrix is not equal");
           }
       
   
}
