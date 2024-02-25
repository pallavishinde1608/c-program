#include<stdio.h>
int main()
{
	int a=0,b=0;
	while(++a<4)  //1<4 2<4 3<4 4<4
	printf("%d\t",a);// 1 2 3 
	while(b++ <4)   //0<4 1<4 2<4 3<4 4<4 
	printf("%d\t",b);//1 2 3 4 
	
}
