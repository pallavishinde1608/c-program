#include<stdio.h>
#include<string.h>
int main()
{
	char name1[90],name2[90];
	printf("enter string\n");
	gets(name1);    //scanf("%s",&name);
	printf("enter string\n");
	gets(name2);    //scanf("%s",&name);
	strcpy(name1,name2);
	printf("copy string is %s",name1);
	
	
}
