#include<stdio.h>

	void power(int base,int index)//definition
	{
		int p=1,i;
		for(i=1;i<=index;i++)
		{
			p=p*base;
			
		}
		printf("power is %d",p);
	}

