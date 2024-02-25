#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,ptr3,a,b,c;
	printf("enter a & b values\t");
	scanf("%d %d",&a,&b);
	ptr1=&a;	
	ptr2=&b;
	a=*ptr1 + *ptr2;
	b=*ptr1 - *ptr2;
	a=*ptr1 - *ptr2;
	printf("a=%d b=%d\n",a,b);
	ptr3=*ptr2;
	*ptr2=*ptr1;
	*ptr1=ptr3;
	printf("a=%d b=%d",a,b);	
}
