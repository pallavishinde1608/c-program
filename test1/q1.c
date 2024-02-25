#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=b=c=1;
	d=++a && ++b || ++c;  // 2 && 2 || ++c      
	                    // 1 && 1 || ++c        1||++c ====1
	printf("%d %d %d %d",a,b,c,d);//2 2 1 1 
}
