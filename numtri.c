#include<stdio.h>
int main()
{
	int i,j ,flag,k=1;
	for(i=1;i<=4;i++)
	{    flag=1;
		for(j=1;j<=7;j++)
		{    
			if(j>=5-i && j<=3+i && flag)
			{
			
			printf("%d",k++);
			flag=0;
		}
		    else
		    {
			
		    printf(" ");
		    flag=1;
		}
	}
		printf("\n");
	}
}

