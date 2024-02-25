#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no,count=0;
	printf("enter no");
	scanf("%d",&no);
	
		count=log10(no)+1;
		
	printf("no of digit = %d",count);
	return 0;
}
