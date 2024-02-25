#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,*ptr1,*ptr2;
	float div;
	printf("enter value of a & b\n");
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("addition is %d",sum);
	sub=*ptr1-*ptr2;
	printf("\nsubstraction is %d\n",sub);
	mul=*ptr1 * *ptr2;
	printf("multiplication is %d",mul);
	div=*ptr1 / *ptr2;
	printf("division is %f",div);
}
