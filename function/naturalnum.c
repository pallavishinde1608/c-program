#include<stdio.h>
int i=1;
void show(int n)
{
	if(i<=n)
	{
		printf("%d\n",i);
		i++;
	
		show(n);
	}
}
int main()
{
	//int i,n=10;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	show(n);
}
