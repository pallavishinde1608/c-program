#include<stdio.h>
int evenSum(int num1,int num2)
{
	if(num1>num2)
	     return 0;
		 return num1+evenSum(num1+2,num2);	

}
int main()
{
	int num1=2,num2;
	printf("enter limit");
     scanf("%d",&num2);
	
	printf("sum=%d",evenSum(num1,num2));
}
