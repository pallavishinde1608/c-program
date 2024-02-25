#include<stdio.h>
void findFactor(int n,int i)
{
	if(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
		findFactor(n,i+1);
		
	}
}
int main()
{
	int no,i=1;
	printf("enter number: ");
	scanf("%d",&no);
	findFactor(no,i);
}
