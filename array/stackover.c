#include<stdio.h>
int main()
{
	int stack[4],len,top=-1,i,value;
	len=sizeof(stack)/sizeof(stack[0]);
	for(i=0;i<len;i++)
	{
        
	       if(top==(len-1))
	      {
	          	printf("overflow");
	      }
	       else
	         { 
               top=top+1;
	 
              printf("enter value\n");
	            scanf("%d",&value);
	          stack[top]=value;
             }
  
   }
   /*for(i=0;i<len;i++)
   {
   	printf("%d",stack[i]);
   }*/
}
