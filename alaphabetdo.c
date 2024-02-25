#include<stdio.h>
int main()
{
	 int i,f1=0,f2=1,fib,ch,n,no,temp,m=1,first,last,mid,c=0,rem,rev=0;
	char chh='A';

	do{
		printf("1.Alphabate in capital\n2.ASCII character\n3.fibonacci series\n4.swap middle number\n");
		printf("enter choice :- ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
		
				while(chh<='Z')
				{
					printf("%c\t",chh);
					chh++;
				}
				break;
			case 2:
				
				while(i<=256)
				{
					printf("ASCII VALUES =%d CHARACTER=%c\n",i,i);
	           	
				i++;
	}
				break;
			case 3:
				printf("enter limit = ");
				scanf("%d",&n);
				while(i<n)
				{
					fib=f1+f2;
					f1=f2;
					f2=fib;
				printf("%d\t",fib);
			
			i++;
		}
				break;
				case 4:
				
					
					printf("enter number");
					scanf("%d",&no);
					temp=no;
					while(no!=0)
					{
						c++;
						no=no/10;
					
						m=m*10;
					
					}
					no=temp;
					last=no%10;
					no=no/10;
					mid=no%(m/100);
					first=no/(m/100);
					while(mid!=0)
					{
						rem=mid%10;
						rev=rev*10+rem;
						mid=mid/10;
						
					}
					
					temp=first*(m/10)+rev*10+last;
					printf("swap number is %d",temp);
					break;
				default :
					printf("\nNot Series");
					
					
				}	
				printf("\nDo you want to continue...");
				scanf("%d",&i);	
	}while(i==1);
}
