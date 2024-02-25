#include<stdio.h>
int main()
{
	int no=6,rem,flag=0;
	int i=2;
	while(i<no)
	{
		rem=no%i;
		no=no/10;
		if(rem==0)
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
