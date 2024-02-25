#include<stdio.h>
void main()
{
	char name[90];
	printf("enter string value\n");
	gets(name);
	int l=strlen(name);
	printf("length is %d\n",l);
}
