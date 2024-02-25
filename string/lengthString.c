/*#include<stdio.h>
#include<string.h>
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);    //scanf("%s",&name);
	int l=strlen(name);
	printf("length is %d",l);
	
	
}*/
#include<stdio.h>
int count=0;
int getLen(char name[])
{
	if(name[count]!='\0')
	{
		++count;
		return getLen(name);
	}
	else
	{
		return count;
	}
}
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);
	int l=getLen(name);
	printf("length is %d",l);
}

