#include<stdio.h>
void calAreaOfCircle(float r)
{
	float Area=3.14*r*r;
	printf("area of circle is %f\n",Area);

}
void calAreaOfCircumferance(float r)
{
	float Area2=2*3.14*r;
	printf("\narea of circumferance is %f\n",Area2);
}
void calAreaOfEquilateral(float a)
  {
	float Area3=0.433*a*a;             //sqrt(3)/4*(a*a);
	printf("area of equilateral is %f\n",Area3);
  }
void calAreaOfRectangle(int l,int b)
{
		int Area4=l*b;
			printf("area of rectangle is %d\n",Area4);	
}
void calAreaOfTriangle(float base,float hieght)
{
	
	float Area5=(0.5*base*hieght);
		printf("area of triangle is : %f\n",Area5);

}
void main()
{
	float r,a,base,hieght;
	int l,b;
	printf("\nenter radius of circle");
	scanf("%f",&r);
	calAreaOfCircle(r);
	
	calAreaOfCircumferance(r);
	
	printf("\nenter side of triangle\n");
	scanf("%f",&a);
	calAreaOfEquilateral(a);
	
	printf("\nenter length and breadth of circle\n");
	scanf("%d %d",&l,&b);
    calAreaOfRectangle(l,b);
    
	printf("\nenter base and hieght of triangle\n");
	scanf("%f %f",&base,&hieght);
	calAreaOfTriangle(base,hieght);

	
	
}
