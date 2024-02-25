#include<stdio.h>
int i=1;
int perfect(int n) //6
{
	int fact;
	int sum=0;
	while(i<n)//1<6 2<6 3<6 4<6 5<6 6<6 false
	{
		if(n%i==0)//6%1 6%2 6%3 6%4 6%5
		{ 
		fact=i;//1 2 3 
		sum=sum+fact;//0+1=1 1+2=3 3+3=6 
	    }
			i++;//2 3 4 5 6
		
	}
	if(sum==n) //6==6
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	printf("enter number");//6
	scanf("%d",&n);
	int x=perfect(n); //1
	if(x==1) //1==1
	{
		printf("perfect number");//print
	}
	else
	{
		printf("not perfect number");
	}
	
	
	
}
