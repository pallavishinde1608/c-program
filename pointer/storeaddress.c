#include<stdio.h>
int main()
{
	int i,len,no;
	int *ptr;
	printf("enter array");
	scanf("%d",&no);
	ptr=&no;
	printf("value %d = address %u",no,ptr);

}
