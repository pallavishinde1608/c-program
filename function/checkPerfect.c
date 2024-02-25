#include<stdio.h>
int checkPerfect(int i,int no)
{
	if(i==1)  //3==1 2==1 1==1  
		return 1;
	if(no%i==0)  //6%3 6%2 6%1   
	{
	return(i+checkPerfect(i-1,no)); //3+2+1 ==>6  
    }
	else{
	return(checkPerfect(i-1,no));
}
   
}
int main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	int i=no/2;  //6/2  ==3     
	int res=checkPerfect(i,no);  //6
	if(res==no)   //6==6
	{
		printf(" %d is perfect number",no);
		
	}
	else
	{
		printf("%d is not perfect number",no);
	}
}
