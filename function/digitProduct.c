#include<stdio.h>
int res=1,rem=0;
int DigitProduct(int n)
{
	if(n>=1)
{   
	rem=n%10;
	res=res*rem;
	n=n/10;
	DigitProduct(n);
}
   return res;
}
int main()
{
	int DigitProduct(int n); 
	int n;
	printf("enter number");
	scanf("%d",&n);
	int product=DigitProduct(n);
	printf("product of Digit is %d",product);
}
