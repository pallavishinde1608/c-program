#include<stdio.h>
void show(int a[])
{ 
int i;
	for(i=0;i<5;i++)
	{
		a[i]=a[i]+10;
		
	}
}
int main()
{
	int i, m[]={10,20,30,40,50};
	printf("\narray before call ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",m[i]);
		
	}
	show(&m[0]);
	printf("\narray after call ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",m[i]);
		
	}
}
