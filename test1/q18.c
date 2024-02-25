#include<stdio.h>
int main()
{
	int a=1,b=1,
	c=a||--b;  //1 ||--b  ==> 1    a=1 b=1
	d=a--&&--b;  //1 && 0 ==> 0    a=0 b=0
	printf("%d %d %d %d",a,b,c,d);  //0 0 1 0
}
