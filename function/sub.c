#include<stdio.h>

int calAdd(int a,int b)   //defination
{
	int add=a+b;
	printf("Addition is %d\n",add);
}
int calSub(int a,int b)
{
	int sub=a-b;
	 printf("Substraction is %d\n",sub);
}
int calMul(int a,int b)
{
	int mul=a*b;
	printf("Multiplication is %d\n",mul);
}
int calDiv(float a,float b)
{
	float div=a/b;
	printf("Division is %f\n",div);
}
int calMod(int a,int b)
{
	int mod=a%b;
	 printf("Module is %d\n",mod);
}
int main()
{
	int a,b;
	printf("enter value of a & b: ");
	scanf("%d %d",&a,&b);
    calAdd(a,b);                //calling
    calSub(a,b);
    calMul(a,b);
    calDiv(a,b);
    calMod(a,b);
}
