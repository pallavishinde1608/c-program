#include<stdio.h>
int main()
{
	int n,i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=(6-i);j++)
{
	printf(" ");
	}
	if(i==1 || i==6)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
	}	
		else
		{
			printf("%d",j);
			for(j=1;j<=2*i-3;j++)
			{
				printf(" ");
				
			}
			printf("%d",j);
		}
		printf("\n");
		}
		}

