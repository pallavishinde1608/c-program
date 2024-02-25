#include<stdio.h>
int main()
{
	int i,limit,a=8,b=2;
	printf("enter limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		if(i%2!=0)
		{
		
		printf("%d\t",a);
		a--;
	}
	else
	{
		printf("%d\t",b*b*b);
		b++;
	}
}}
