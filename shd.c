#include<stdio.h>
int main()
{      
	int i,j;
	for(i=1;i<=9;i++)
	{   
		for(j=1;j<=i;j++)
		{    
			if(j<=10-i && j<=i)
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

