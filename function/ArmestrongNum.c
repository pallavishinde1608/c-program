#include<stdio.h>
int i=1,j=1,rem,c=0,sum=0,p=1,temp;
//count digit logic
int NumCount(int num)
{
	if(num>0)
	{
		num=num/10;
		c++;
		NumCount(num);
	}
	return c;
}
//count power of digit logic
int NumPower(int n)
{
if(j<=c)
{
	p=p*n;
	j++;
	NumPower(n);
	}	
	return p;
}
//armestrong logic
int isArmestrong(int n)
{
	if(n>0)
	{
		p=1,j=1;
		rem=n%10;
		sum=sum+NumPower(rem);
		n=n/10;
		isArmestrong(n);
	}
	return sum;
}
void Print(int no)
{
	for(i=1;i<=no;i++)
	{
		sum=0,c=0;
		NumCount(i);
		if(i==isArmestrong(i))
		{
		printf("\t%d",i);	
		}
	}
}
void main()
{
	int no,tem;
	printf("Enter number");
	scanf("%d",&no);
	Print(no);
}
