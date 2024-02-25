
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{    
			if( j==i || j==5 || i==1)
			printf("%d",j);
		    else
		    printf(" ");
		}
		printf("\n");
	}
	
}
