/*#include<stdio.h>
#include<string.h>
int main()
{
	char name1[90],name2[90];
	printf("enter string\n");
	gets(name1);    //scanf("%s",&name);
	printf("enter string\n");
	gets(name2);    //scanf("%s",&name);
	strcat(name1,name2);
	printf("string is %s",name1);
	
	
}*/
#include<stdio.h>
int count=0;
int getStringLen(char name1[])
{ 
     int c=0;
	while(name1[c]!='\0')
	{
		++c;
	}
	return c;
}
char *myConcat(char fString[],char sString[],int flen)
{
if(sString[count]!='\0')
{
	fString[flen++]=sString[count++];
	return myConcat(fString,sString,flen);
	}
	else{
	return fString;
   }  
}
int main()
{
	char name1[90],name2[90];
	printf("enter first string\n");
	gets(name1);
	printf("enter second string\n");
	gets(name2);
	int flen=getStringLen(name1);
	char *ptr=myConcat(name1,name2,flen);
	printf("concated string is %s",ptr);
	}
