#include<stdio.h>
int main()
{
	int i,j ,k=1;
	for(i=1;i<=10;i++)
	{    //flag=1;
		for(j=1;j<=9;j++)
		{    
			if(j>=5-i && j<=3+i && j>=i-3 && j<=11-i)
			{
			if(j%2==0)
			printf("*");
			else
			printf("%d",k++);
			//flag=0;
		}
		   /* else
		    {
			
		    printf(" ");
		    flag=1;
		}*/
	}
		printf("\n");
	}
}

