#include<stdio.h>
void calAreaOfCircumferance(float r)
{
	float Area;
	Area=2*3.14*r;
	return Area;
}
int main()
{
	float r,Area;
	printf("enter radius of circle");
	scanf("%f",&r);
	Area=2*3.14*r;
	printf("area of circumferance is %f",Area);
	
}
