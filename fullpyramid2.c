#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{count=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i)
			{
				printf("%d",count);
				if(j<5)
				{
					++count;
				}
				else
				{
					--count;
				}
			}
			
			else
			{
				printf(" ");
			}
		}
		printf("\n");
			}
}
