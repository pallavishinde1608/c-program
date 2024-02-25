#include<stdio.h>
int oddSum(int num1,int num2)
{
	if(num1>num2)
	     return 0;
		 return num1+oddSum(num1+2,num2);	

}
int main()
{
	int num1=1,num2;
	printf("enter limit");
     scanf("%d",&num2);
	
	printf("sum=%d",oddSum(num1,num2));
}
