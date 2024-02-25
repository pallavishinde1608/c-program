#include<stdio.h>
int main()
{
	int i=1024;
	int count=0;
for(;i;i>>=1)   // 1024 >>= 1  10000000000>>=1 01000000000 00100000000.......00000000000>>=11
{
	printf("ABC\n");
	count++;
}
printf("%d=",count);
}
