#include<stdio.h>
int main()
{
	int i,j,flag,k=1;
	for(i=1;i<=5;i++)
	{
		flag=0;
		for(j=1;j<=17;j++)
		{
			if(j>9-i && j<=8+i  && flag)
			{
				printf("%d",i);
				flag=0;
			}
			else
			{
				printf("*");
				flag=1;
			}
		}
		printf("\n");
	}
}
