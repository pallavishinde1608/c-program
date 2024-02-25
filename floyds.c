#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{    
			if(j<=i)
			{
			printf("%d",j);	
			if(i==(j+1)/j)
			{	
		
			j++;
		
	}
	}
		}
		printf("\n");
	}
	
}
