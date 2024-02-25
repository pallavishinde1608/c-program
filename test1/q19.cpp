#include<stdio.h>
int main()
{
	int a;
	a=1;
	if(!(++a)<<2)   //-2<<2      -8
	{
		printf("hello");
	}
	else
	{
		printf("hi");  //hi
	}
   
}
