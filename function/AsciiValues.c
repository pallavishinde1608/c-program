#include<stdio.h>
void Ascii(int n)
{
	if(n<=256)
	{ 
	        
		printf("values : %d    character : %c\n",n,n);
		
     	return Ascii(n+1);	
		
	}
}
int main()
{  
int n;
  Ascii(n);
  
}
