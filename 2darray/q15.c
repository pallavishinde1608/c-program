//Example15:// WAP to create 3 x 3 matrix and perform addition , multiplication of two matrix and 
//store its result in 3rd matrix.


/*#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	printf("enter first array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Display first array matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("Display second array matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
//ddition logic
printf(" display Addition of matrix\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	    
	}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{ 
     	printf("%d\t",c[i][j]);

    }
printf("\n");
}
}*/


#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter first array values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);     //1 2 3 4 5 6 7 8 9 
		}
	}
	printf("Enter second array values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);      //1 2 3 4 5 6 7 8 9 
		} 
	}
	//multiplication logic
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			int sum=0;
			for(k=0;k<3;k++)
			{
			sum=sum+a[i][k]*b[k][j];	
			}
			c[i][j]=sum;
		}
	}
	printf("Display array matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);       
		}
		printf("\n");
	}
}

