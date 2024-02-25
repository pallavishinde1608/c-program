#include<stdio.h>
int main()
{      
	int i,j;
	for(i=1;i<=3;i++)
	{   
		for(j=1;j<=6;j++)
		{    
			if(i%2!=0 || j>5 ||j<=1)
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

