#include<stdio.h>
int calMul(int a,int b)
{
	return(a*b);
}
int main()
{
	int a,b,mul;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
    mul=calMul(a,b);
    printf("Multiplication is %d",mul);
}
