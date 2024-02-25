#include<stdio.h>
int getAverage(int a[])
{
	int avg=0,i=0;
	while(i<6)
	{
		avg=avg+a[i];
		i++;
	}
	return(avg);
}
int main()
{
	int a[6]={20,30,40,50,60,70};
	int result=getAverage(a);
	printf("average is %d",result);
}
