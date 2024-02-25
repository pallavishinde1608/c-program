#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=4;i++)
	{
	
		for(j=1;j<=7;j++)
		{
			if(j==5-i || j==8-i || i==4 && j<=4 || i==1 && j>=4)
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
				
			}
		}
		printf("\n");
	}
}
