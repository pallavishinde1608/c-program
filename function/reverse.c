#include<stdio.h>
    int rev=0;
	int reverse(int no)  //123
	{
		if(no!=0)  //123!=0
		{
    int rem=no%10; //
		no=no/10;
		rev=rev*10+rem;
		reverse(no)	;
		}
		else
		{
			return rev;
		}
	}
	int main()
	{
		int no;
		printf("enter number\n");
		scanf("%d",&no);
		int result=reverse(no);
		printf("reverse is %d",result);
	}
