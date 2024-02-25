#include<stdio.h>
void calAreaOfTriangle(float base,float hieght)
{
	float Area;
	Area=0.5*base*hieght;
	return Area;
}
int main()
{
	float base,hieght,Area;
	printf("enter base and hieght of triangle\n");
	scanf("%f %f",&base,&hieght);
	Area=0.5*base*hieght;
	printf("area of triangle is : %f",Area);
	
}
