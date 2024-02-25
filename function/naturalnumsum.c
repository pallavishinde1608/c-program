#include<stdio.h>
int numSum(int n)
{
	if(n==0)
	return 0;
	return n+numSum(n-1);
}
int main()
{
	int n,i;
	printf("enter number");
     scanf("%d",&n);
	int result=numSum(n);
	printf("sum=%d",result);
}
