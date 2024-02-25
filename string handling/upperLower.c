/*#include<stdio.h>
void main()
{
	char ch[90];
	printf("enter string \n");
	gets(ch);
	printf("before conversion string : %s\n",ch);
	strupr(ch);
	printf("after conversion string : %s\n",ch);
}*/



#include<stdio.h>
#include<string.h>
int count=0;
char * myUpperCaseFun(char *ptr)
{
	if(ptr[count]!='\0')
	{
		if(ptr[count]>='a' && ptr[count]<='z')
		{
			ptr[count]=ptr[count]-32;
		}
		++count;
		return myUpperCaseFun(ptr);
	}
	else{
		return ptr;
	}
}
int main()
{
	char ch[90];
	printf("enter string \n");
	gets(ch);
	printf("before conversion string : %s\n",ch);
	char *p=myUpperCaseFun(ch);
	printf("after conversion string : %s\n",ch);
}
