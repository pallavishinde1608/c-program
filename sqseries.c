#include<stdio.h>>
int main()
{
	int i,a=1,limit;
	printf("enter limit");
	scanf("%d",&limit);
	for(i=1;i<limit;i++)
	{
		printf("%d\t",a*a);
		a++;
	}
}
