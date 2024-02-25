#include<stdio.h>
int main()
{      
	int i,j;
	for(i=1;i<=10;i++)
	{   
		for(j=1;j<=10;j++)
		{
		
		if((j<i*1 && j>11-i )||( j<11-i  && j>i ))
		{
			printf(" ");
		}
	
		    else
		    {
			
		    printf("*");
		
		}
	}
		printf("\n");
		
	}
}

