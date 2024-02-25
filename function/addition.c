#include<stdio.h>
void calarith(int a,int b)
  {
	int c;
	c=a+b;
	c=a-b;
	c=a*b;
	c=a/b;
	c=a%b;
	return();
  }
int main()
  {
	int a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	int sum=a+b;
	printf("addition = %d\n",sum);
	int sub=a-b;
	printf("substraction = %d\n",sub);
	int mul=a*b;
	printf("multiplication = %d\n",mul);
	float div=a/b;
	printf("division = %f\n",div);
	int mod=a%b;
	printf("module %d\n",mod);
	
  }
