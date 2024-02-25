#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
	int b_no;
	char b_name[40];
	char b_author[40];
	int b_price;
	char b_title[40];
	
};
int main()
{
	struct book b[20],temp;
	int ch,n,i,j,accession,count=0,flag;
	char author[90];
	char title[90];
	do
	{
		printf("\n1.Add book information\n2.Display book information\n3.List of all book of given author\n4.List of the title of specified book\n5.List the count of books in the library\n6.List the books in the order of occassion number\n");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			
		case 1 :
			printf("how many record you want to add\n");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("enter book no : ");
				scanf("%d",&b[i].b_no);
				printf("enter book name : ");
				scanf("%s",&b[i].b_name);
				printf("enter auther name : ");
				scanf("%s",&b[i].b_author);
				printf("enter price of book : ");
				scanf("%d",&b[i].b_price);
			}
			break;
			case 2:
				printf("\n\tDetails of all  book\n");
				for(i=0;i<n;i++)
				{
					printf("\nBook no =%d\nBook name=%s\nAuthor name= %s\nprice of book=%d\n",b[i].b_no,b[i].b_name,b[i].b_author,b[i].b_price);
					
				}
				break;
				case 3:
					printf("\nEnter author name : ");
					scanf("%s",&author);
				/*	for(i=0;i<n;i++)
					{
						flag=0;
			            for(j=0;j<n;j++)
			            {
				
					if(b[i].b_author[j]==author[j])
					{
						flag=1;
					
					}
				}
				
				if(flag==1)
				{
					printf("\nbook name : %s\n",b[i].b_name);
				}
				else
				{
					printf("no book\n");
				}
					
			}*/
				for(i=0;i<n;i++)
				{
					if(strcmp(b[i].b_author,author)==0)
					{
					
					printf("\nbook name : %s\n",b[i].b_name);
				     }
				     else
				     {
				     	printf("no book available");
					 }
			   }	
					break;
					
					
					case 4:
						
						for(i=0;i<n;i++)
						{
							count++;
						}
						printf("\ntotal number of book in library %d\n",count);
						break;
						case 5:
							for(i=0;i<n;i++)
							{
								for(j=i+1;j<n;j++)
								{
									if(b[i].b_no>b[j].b_no)
									{
									    temp=b[i];  
										b[i]=b[j];
										b[j]=temp;
									}
									
								}
							
						}
						for(i=0;i<n;i++)
						{
						
							printf("%d\t%s\t%s\t%d\n",b[i].b_no,b[i].b_name,b[i].b_author,b[i].b_price);
						}
							
						case 6:
							exit(0);
					
		}
		
	}while(ch!=6);
	return 0;
}
