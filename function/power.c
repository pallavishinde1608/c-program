#include<stdio.h> 
int p=1;
int power(int base,int index)
{
	for(index=1;index!=0;--index)
	{
	 p=p*base;
	return power(base,index);
   }
   return p;
}
int main()
{
	int base,index;
	printf("enter base and index");
	scanf("%d %d",&base,&index);
   int	result=power(base,index);
   printf("power is %d",result);
}

