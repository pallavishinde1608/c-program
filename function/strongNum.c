#include<stdio.h>
#include<math.h>
int factorial(int num)//2
{
	if(num<=0)//2<=0 1<=0
	return 1;
	else
	return num*factorial(num-1);//2*1=2 1*0=0
}
int checkStrongNum(int num)
{
	int fact;
	static int sum=0;
	if(num>0) //2>0
	{
		fact=1;
		int rem=num%10;//2%10
		checkStrongNum(num/10); //0
		fact=factorial(rem);  //2
		sum=sum+fact;//0+2
	}
	return sum;
}
int main()
{
	int num;
	printf("enter number"); //2
	scanf("%d",&num);
	if(checkStrongNum(num)==num)//2==2
   printf("strong number");//print
   else
   printf("not strong number");
}
