#include<stdio.h>
int main()
{
int a[3][3],i,j,r,c,flag=1;
printf("enter number of rows");      //3
scanf("%d",&r);
printf("enter number of columns");   //3
scanf("%d",&c);
for(i=0;i<r;i++)             //0<3...
{
	for(j=0;j<c;j++)          //0<3...
	{
		printf("Element [%d],[%d]: ",i,j);  //[0 0]:1 [0 1]
		scanf("%d",&a[i][j]);              
	} 
}
printf("matrix is :\n");
for(i=0;i<r;i++)           //0<3....
{
	for(j=0;j<c;j++)       //0<3 1<3 2<3 3<3
	{
		printf("%d\t",a[i][j]);  //1 0 0   0 1 0  0 0 1
	}
	printf("\n");
	
}

for(i=0;i<r;i++)   //0<3..
{
	for(j=0;j<c;j++)  //0<3..
	{
		if(a[i][j]!=1 && a[j][i]!=0)  //1!=1 && 1!=0 false   
		{
			flag=0;
			break;
		}
   }
}
         if(flag)  //1 true
          {
	          printf("the matrix is identity matrix");//matrix
         }
       else
           {
	         printf("the matrix is not identity");
           }
}
