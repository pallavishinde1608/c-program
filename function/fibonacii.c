#include<stdio.h>
void fibSeries(int n) //8
{ 
	static int f1=0,f2=1,fib;
	if(n>0)   //8>0
	{
	fib=f1+f2;//0+1=1  1+1=2  1+2=3 2+3=5...
     f1=f2;   //f1=1  //1 2....
     f2=fib;//f2=1    2 3....
     printf("%d\t",fib);//1
     fibSeries(n-1);//8-1=7-1=6-1=5...
 }
}
int main()
{
int n;
printf("enter limit");
scanf("%d",&n);
printf("%d\t%d\t",0,1);
fibSeries(n-2);//10-2=8

}

