#include<stdio.h>
void calAreaOfRectangle(int l,int b)
{
	int Area;
	Area=l*b;
	return(Area);
}
int main()
{
	int l,b,Area;
	printf("enter length and breadth of circle");
	scanf("%d %d",&l,&b);
	Area=l*b;
	printf("area of rectangle is %d",Area);
	
}
