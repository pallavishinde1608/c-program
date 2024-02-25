 //Function call itself function called recursive function
 
#include<stdio.h>
	void show(int no)     //5 4 3 2 1
	{
	
	if(no!=0)    //5!=0.....0!=0 False
     {
	    printf("Good Morning\n");     //1 2 3 4 5
	    show(--no);          //recursive calll  4 3 2 1 0
     }
    else
      {
	    printf("\nEND"); // end
      }
	}
int main()
{  
// int n;
//printf("enter number");
//scanf("%d",&n);
 show(5);     // show(n);  //initial call
}
