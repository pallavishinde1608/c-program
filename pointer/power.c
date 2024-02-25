#include<stdio.h>
#include<math.h>
int main()
{
	int no,*ptr1,power,*ptr2,p;
	printf("enter no ");
	scanf("%d",&no);
	printf("enter power ");
	scanf("%d",&power);
	ptr1=no;
	ptr2=power;
	p=pow(no,power);
	printf(" %d power of %d is %d",no,power,p);
}
