
#include<stdio.h>

void show(int a[])   //declaration
{
     int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);

    }
}
int main()
{
	void show(int a[]);//defination
	int a[5],i;
    int len=sizeof(a)/sizeof(a[0]);
	printf("enter array element");
	for(i=0;i<len;i++)
	{
	scanf("%d",&a[i]);
    }
    
//	void show(int a[]);
	show(a); //calling
}
