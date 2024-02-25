#include<stdio.h>
int main()
{
	int i,j,k;
	char c='A';
	for(i=1;i<=5;i++)
	{
		k=c;
		for(j=1;j<=9;j++)
		{
			if(i*2>j)
			{
				if(i>j)
				{
					printf("%c",k--);
					
				}
				else
				{
					printf("%c",k++);
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		c++;
	}
}
