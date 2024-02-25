#include<stdio.h>
int main()
{
	int f,l,n,c=0,i=1,mid,m=1,temp;
	printf("enter number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
		printf("\ncount is %d",c);
		

	while(i<c)
	{
		m=m*10;
		i++;
	}
	printf("\nmultiple is %d",m);
	

	n=temp;
	l=n%10;
	n=n/10;
	mid=n%(m/10);
	f=n/(m/10);                                       
	temp=(l*m)+(mid*10)+f;
	printf("\nswap is %d",temp);
	return 0;
	}
