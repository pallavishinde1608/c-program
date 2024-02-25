#include<stdio.h>
int count=0;
void table(int no)  //5
{  
    
    if(count<10)   //0<10  1<10....9<10  10<10 False
    {
    	++count;  //1  2....10
     	printf("%d * %d = %d\n",no,count,count*no); //1*5 2*5....10*5
     	//table(no);   //5 
    }
	
}
int main()
{  
    int no;
    printf("enter number"); //5
    scanf("%d",&no);
	table(no);  //5
	//table(5);
}
