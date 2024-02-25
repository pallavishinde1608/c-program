#include<stdio.h>
int main()
{
	int a[3][3],i,j,rsum=0,csum=0;
	printf("enter values");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("display array matrix\n");
	for(i=0;i<3;i++)
	{
	//	rsum=0;

		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		//	rsum=rsum+a[i][j];
	
		
		}
			printf("\n");
		//printf(" = %d\n",rsum);
		
	}
	for(i=0;i<3;i++)
	{
		
		csum=0;
		for(j=0;j<3;j++)
		{
	
			csum=csum+a[j][i];
		
		}
			
		printf("=%d\t",csum);
	
		
	}
}
