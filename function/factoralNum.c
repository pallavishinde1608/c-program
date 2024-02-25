#include<stdio.h>
int factorialNum(int n)
{
	if(n==1)
	return 1;
	return(n*factorialNum(n-1));
}
int main()
{
	int n,f;
	printf("enter number");
	scanf("%d",&n);
	f=factorialNum(n);
	printf("factorial of %d is %d",n,f);
}
