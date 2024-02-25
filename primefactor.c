#include<stdio.h>
int main()
{
	int i,no;
	printf("enter number");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
		
		printf("%d\t",i);
		no=no/2;
		}
	}
}
