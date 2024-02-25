#include<stdio.h>

int firstLastDigits(int no)
{
   if(no!=0)
   {
		  int last=no%10; 
		  firstLastDigits(last);	 
   }
   
   	return 0;
}
int main()
{
	int no,result;
	printf("enter number");
	scanf("%d",&no);
	result=firstLastDigits(last);
 printf("total number of digit is %d",result);
 return 0;
    
     
    
}
