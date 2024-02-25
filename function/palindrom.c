#include<stdio.h>
int palindrom(int no)
{
	int rem,rev=0;
	if(no!=0)
	{
	rem=no%10;
	rev=rev*10+rem;
	no=no/10;
	return rev;
}
palindrom(no);
}
int main()
{
	int no,result;
	printf("enter num");
	scanf("%d",&no);
	result=palindrom(no);
	if(no==result)
	{
		printf("palindrom number");
		
	}
	else{
		printf("not palindrom number");
	}
}
