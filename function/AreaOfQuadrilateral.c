#include<stdio.h>
#include<math.h>
void calAreaOfEquilateral(float a)
  {
	float Area;
	Area=0.433*a*a;             //sqrt(3)/4*(a*a);
	return(Area);
  }
int main()
{      
	float a=5,Area;
	/*printf("enter side of triangle");
	scanf("%f",&a);*/
	Area=0.433*a*a;             //sqrt(3)/4*(a*a);
	printf("area of equlateral is %f",Area);
}
