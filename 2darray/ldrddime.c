#include<stdio.h>
int main()
{
	int a[3][3],i,j,ld,rd,r,c;
	printf("enter row : ");
	scanf("%d",&r);
	printf("\nenter column : ");
	scanf("%d",&c);
	
	printf("enter values\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("display array matrix\n");
	ld=0;
	rd=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			if(i==j)
			{
			ld=ld+a[i][j];
			}
			if(j==(r-1)-i)
			 {
				rd=rd+a[i][j];
			 }
		}
			printf("\n");
	}
			
		
		printf("\nsum left array %d\n",ld);
		printf("\nsum right array %d\n",rd);
}
