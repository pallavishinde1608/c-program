#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,avg;
	float per;
	printf("enter six subject");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=(s1+s2+s3+s4+s5);
	avg=total/5;
	per=(total*100)/500;
	printf("\n average=%d",avg);
	printf("\n percentage=%f",per);
	(per>=90)?"Grade A":(per>=80);
		return 0;
}
