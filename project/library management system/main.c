//driverapplication or main function 
#include<stdio.h>
#include  "addbook.h"
#include "viewbook.h"
#include "searchbook.h"
int main(){
	int choice,bid;
	do{
	  printf("1:Add New Book\n");
	  printf("2:View All Books\n");
	  printf("3:Search Book\n");
	  printf("Enter your choice\n");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1:
	  	printf("Enter id and price name and author\n");
	  	scanf("%d%d%s%s",&b.id,&b.price,&b.name,&b.author);
	  	addBook(b);//function call
		break;
		
	   case 2:
	    getBooks();
	    break;
	    
		case 3:
		  printf("Enter book id for search\n");
		  scanf("%d",&bid);	
		  int result=searchBook(bid);
		  if(result!=-1){
		  	    printf("Book found");
		  }  	  
		  else
		  {
		  	printf("Book not found");
		  }
		  break;
		  }
	}while(choice!=4);	
	return 0;
}







