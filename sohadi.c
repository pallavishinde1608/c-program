#include<stdio.h>
int main()
{      
	int i,j,k=3;
	for(i=1;i<=7;i++)
	{   
		for(j=1;j<=7;j++)
		{    
			if(j<=i &&i<=4||i>=5&& j<=8-i)
			{
				
			printf("%d",k);
	        
		}
	
	}
	i<4?k++:k--;
		printf("\n");
		
	}
}

