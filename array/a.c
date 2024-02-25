#include<stdio.h>

void main()
{
	long int choice,i,count=0,n,m=1,fd,ld,rem,temp,temp1,swapno,rem1,rev=0;
	
	printf("Enter choice : \n1.print all alphabet in capital leter\n"
	"2.print all ascii character from 0 to 255 \n"
	"3.reverse middle number rather than first and last digit\n"
	"4.print fibonacci series from 1 to n\n");
	scanf("%ld",&choice);
	
	switch(choice)
	{
		case 1: 
				printf("all alphabet in capital letter :");
				for(i='A';i<='Z';i++)
					printf("%2c",i);
				break;
		case 2:
				printf("ascii characters : \n");
				for(i=0;i<=255;i++)
					printf("%c\n",i);
				break;
		case 3: 
				printf("Enter a number: ");
				scanf("%ld",&n);				// 12345
				temp=n;
				while(n!=0)
				{
					count++;		//5
					m=m*10;			// 100000
					n=n/10;
				}
				
				n=temp;
				
				ld=n%10;		//5
				
				
				temp=n;
				while(n!=0)
				{
					rem=n%10;
					fd=rem;		//1
					n=n/10;
				}
				n=temp;
				
				swapno=n%(m/10);	//12345%10000
				swapno=swapno/10;	//2345%10
				
				temp1=swapno;
				
				while(swapno!=0)
				{
					rem1=swapno%10;		//234%10
					rev=(rev*10)+rem1; //432
					swapno=swapno/10;
				}
					
				swapno=fd*(m/10);  //1*10000
				swapno=swapno+rev*10; // 10000+432*10=14320
				swapno=swapno+ld;
				
				printf("reverse the middle number : %ld",swapno);
				
				break;	
		case 4:
				
				printf("Enter range for printing fibonacci series : ");
				scanf("%ld",&n);
							
	}
	
	
}

