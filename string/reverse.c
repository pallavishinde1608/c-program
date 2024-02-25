/*#include<stdio.h>
#include<string.h>
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);    //scanf("%s",&name);
	strrev(name);
	printf(" reverse string is %s",name);
	
	
}*/
#include<stdio.h>
#include<string.h>
char *getReverse(char name[],int len)
{
	int mid=len/2;
	int end=len-1;
	int start=0;
	for(start=0;start<mid;start++)
	{
		char temp=name[start];
		name[start]=name[end];
		name[end]=temp;
		end--;
		
		
	}
	return name;
}
int main()
{
	char name[90];
	printf("enter string\n");
	gets(name);
	int len=strlen(name);
	char *ptr=getReverse(name,len);
	printf("reverse string is %s",ptr);
}
