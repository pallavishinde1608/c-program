#include<stdio.h>
int i=2;
int primenum(int num)//3                          (int num,int i)
{  
    int flag=-1;

     while(i<num) //2<3
    {
     	if(num%i==0)  //3/2==0  3/3==0
	     {
		
	       flag=1;           //1
	       return 0;
         }
             i++;
             primenum(num);                              //(num,i)
    }
     if(flag==-1) //1
      {
	    return 1;
      }
     else
       {
	     return -1;//..
       }
 

}
int main()
{
	int num,x;
	printf("enter number");
	scanf("%d",&num);
	x=primenum(num);                        //(num,2)
	if(x==1)
	  {
		printf("prime number");
	  }
	else
	  {
		printf("not prime number");

	  }
}
