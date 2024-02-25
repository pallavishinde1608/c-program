#include<stdio.h>
int main()
{
	int i,limit,a=1;
	printf("enter number");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		printf("%d\t",a);
		a=a+i;
	}

	
}
