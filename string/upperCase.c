/*#include<stdio.h>
#include<string.h>
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);    //scanf("%s",&name);
	strupr(name);
	printf("string is %s",name);
	
	
}*/
#include<stdio.h>
int count=0;
char *getUpperString(char *ptr)
{
	if(ptr[count]!='\0')
	{
	   if(ptr[count]>='a' && ptr[count]<='z')
	{
		ptr[count]=ptr[count]-32;
		
	}
	++count;
	return getUpperString(ptr); 
}
	else{
		return ptr;
	}
}
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);    //scanf("%s",&name);
     char *p=getUpperString(name);
	printf("string is %s",p);
}
