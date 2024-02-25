#include<stdio.h>
int calAdd(int a,int b)
{
	return(a+b);
}
int main()
{
	int a,b,add;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
    add=calAdd(a,b);
    printf("Addition is %d",add);
}
