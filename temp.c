#include<stdio.h>
int main()
{
	int temp;
	printf("enter temperature in centigrade");
	scanf("%d",&temp);
	(temp < 0)?printf("\nFreezing weather"):(temp >=0 && temp<=10)?printf("\n very cold weather "):(temp>= 10 && temp<=20)?printf("\ncold weather"):(temp>= 20 && temp<=30)?printf("\nnormal in temp"):(temp>=30 && temp<=40)?printf("\nits hot"):printf("\nits very hot");
	return 0;

}
