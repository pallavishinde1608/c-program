#include<stdio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},sum=0;
	int *ptr;
	ptr=a;
	for(i=0;i<5;i++)
	{
	   printf("%d\t",ptr[i]);
		sum=sum+*(&a[i]);
	
	}
	printf("\nsum=%d",sum);
}
