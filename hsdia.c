#include<stdio.h>
#include<conio.h>
	void main()
	{
	   int i,j,k=1,m=10,l=1,n=7,p=4;
	   for(i=1; i<=8;i++)
	   {
	      i>6?k=k+3:k;
	      i==6?m=m-i:i==7?m=m-5:i==8?m=1:0;
	     for(j=1; j<=7; j++)
	       {
                 if(j<=(i*2)-1 && i<=5)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
		          {    
		
		               (j%2==0)?printf("*"):(i==5)?printf("%d",n++):printf("%d",l++);
		      
		          }

		                if(i<=8 && i>=6 && j<=(i-k))
		                   {
		
		                          (j%2==0)?printf("*"):printf("%d",m++);
                     	      }
                           
           }
	      printf("\n");
	      
	   }
}

