#include<stdio.h>
int main()
{
	int i,j;
	i=j=1;
	for(;j;printf("%d %d\n",i,j)) // 2 1  3 1  4 1 5 1 6 1 7 0 
	{
		j=i++<=5;
	}
}
