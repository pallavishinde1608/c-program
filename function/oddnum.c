#include<stdio.h>
 int start=1;
void Odd(int start,int end)
{
	if(start>end)
		return;
		if(start%2==1)
		printf("%d\t",start);
		start++;
	    Odd(start,end); //recursive calling
}
int main()
{
    int start,end;
    printf("enter start");
    scanf("%d",&start);
    printf("enter end");
    scanf("%d",&end);
	printf("Odd number\n");
	Odd(start,end);//calling
}
