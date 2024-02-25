#include<stdio.h>
int main()
{
	float unit,bill,surcharge,total_bill;
	printf("Enter electricity unit");
	scanf("%f",&unit);
	bill=(unit > 0 && unit <= 50)?(unit*0.5):(unit > 50 && unit <= 150)?(25+(unit-50)*0.75):(unit > 150 && unit <= 250)?(100+(unit-150)*1.2):(220+(unit-250)*1.5);
	printf("\nbill=%f",bill);
	surcharge=bill*0.2;
	printf("\n\tsurcharge=%f",surcharge);
	total_bill=bill+surcharge;
	printf("\n\t\ttotal bill=%f",total_bill);
	return 0;
}
	
