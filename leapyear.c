#include<stdio.h>
int main()
{
	int year;
	printf("enter year is:");
	scanf("%d",&year);
	((year%4==0) && ((year%400==0) || (year%100!=0)))?printf("\n%d is leap year",year):printf("\n%d is not leap year",year);
	return 0;

}
