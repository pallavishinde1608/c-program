#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
	printf("enter first array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Display first array matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("Display second array matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
//ddition logic
printf(" display Addition of matrix\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	    
	}

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{ 
     	printf("%d\t",c[i][j]);

    }
printf("\n");
}
}


