#include<stdio.h>
int main()
{      
	int i,j;
	for(i=1;i<=9;i++)
	{   
		for(j=1;j<=9;j++)
		{    
			if(j==6-i || i==5 || j==i-4 )
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

