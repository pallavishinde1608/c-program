#include<stdio.h>
int DigitSum(int n)
{
	if(n==0)
	return 0;
	return(n%10+DigitSum(n/10));
}
int main()
{
	int DigitSum(int n); 
	int n;
	printf("enter number");
	scanf("%d",&n);
	int sum=DigitSum(n);
	printf("product of Digit is %d",sum);
}
