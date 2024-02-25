#include<stdio.h>
int getsum(int no)
{
	int s=0;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		s=s+rem;
		
	}
	return s;
}
