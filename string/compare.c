/*#include<stdio.h>
#include<string.h>
int main()
{
	char name1[90],name2[90];
	printf("enter string\n");
	gets(name1);    //scanf("%s",&name);
	printf("enter string\n");
	gets(name2);    //scanf("%s",&name);
	int value = strcmp(name1,name2);
	if(value==0)
	{
	printf("string is equal");
}
else{
	printf("string is not equal");
}
	
}*/
#include<stdio.h>
#include<string.h>
int count=0;
int ownStringComp(char name[],char name1[],int f,int s){
	 if(f==s){
	 	int count=0,flag=1,diff;
	 	while(name[count]!='\0'){
	 		 diff=name[count]-name1[count];
	 		if(diff!=0){
	 			flag=0;
	 			break;
			 }
			 ++count;
		 }
		 return flag==1?0:diff;
	 }
	 else{
	 	return -1;
	 }
} 
int main(){
	char name[90],name1[90];
	printf("\nEnter string value\n");
	gets(name);
	printf("\nEnter second string\n");
	gets(name1);
	int f=strlen(name);
	int s=strlen(name1);
	int result=ownStringComp(name,name1,f,s);
	if(result==0){
		printf("Strings are equal");
	}
	else{
		printf("strings are not equal");
	}
}

