#include<stdio.h>
int main()
{
	int *ptr,i,a[5];//={10,20,30,40,50};
    for(i=0;i<5;i++)
	  {
		printf("enter values");
		scanf("%d",&ptr);
		ptr++;
	 }
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("%u--->%d\n",&a[i],a[i]);
		ptr++;
	}
}
