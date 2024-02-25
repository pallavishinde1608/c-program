#include<stdio.h>
int main()
{
	int i=5,j=10,k=15;
	printf("%d\t",sizeof(k/=i+j));//integer size 4
	printf("%d",k);//15   
}
