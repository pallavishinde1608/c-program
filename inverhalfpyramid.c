#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{    
			if(j<=6-i || j==1||i==1)
			printf("%d",j);
		    
		}
		printf("\n");
	}
	
}
