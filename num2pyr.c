#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=10-i && j>=i)
			{
				printf("%d",k);
				
			}
			if(j>=5 )
			{
				k--;
			}
			else
			{
				k++;
			}
			
			
		}
		printf("\n");
	}
}
