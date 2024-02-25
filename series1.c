#include<stdio.h>
int main()
{
	int i,limit,a=16,b=1;
	printf("enter limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		if(i%2!=0)
		{
		
		printf("%d\t",a);
		a=a-2;
	}
	else
	{
		printf("%d\t",b*b);
		b++;
	}
}}
