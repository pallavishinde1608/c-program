#include<stdio.h>

int countDigits(int no)
{
   static int count=0;
   if(no!=0)
   {
		  count++; 
		  no=no/10;
		  countDigits(no);	 
   }
   
   	return count;
}
int main()
{
	int no,count=0;
	printf("enter number");
	scanf("%d",&no);
	count=countDigits(no);
 printf("total number of digit is %d",count);
 return 0;
    
     
    
}
