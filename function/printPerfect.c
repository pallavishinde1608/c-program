#include<stdio.h>
int isPerfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
	if(num%i==0)
	  {
	    sum=sum+i;
       }
	}
	if(sum==num) 
		return 1;
		else
	    return 0;
}
void printPerfect(int start,int end)
{
	while(start<=end)
	{
		if(isPerfect(start))
		{
			printf("%d\t",start);
		}
		  start++;
	}
}
int isPerfect(int num);
void printPerfect(int start,int end);
int main()
{    int start,end;
	printf("enter lower limit");
	scanf("%d",&start);
	printf("enter upper limit");
	scanf("%d",&end);
	printPerfect(start,end);
}

