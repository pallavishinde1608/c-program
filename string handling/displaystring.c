#include<stdio.h>
void main()
{
	char ch[90];
	printf("enter the name\n");
	gets(ch);   //not use scanf function it will not accept input
	printf("name is %s\n",ch);
}
