#include <stdio.h>   
#include <conio.h>  
#include <stdlib.h>    
#include <string.h>   
struct library  
{  
    
    char book_name[100] ,author_name[100];  
    float cost;  
    int no_of_pages;  
};  

  
int main()  
{  
    
    struct library lib[100];  
    char book_name[100];  
    int i, j, count,choice;  
    i = 0;  
    j = 0;  
    count = 0; 
	 
  
    do 
    {  
        printf(" \n\n1. Add Book details\n ");  
        printf(" 2. Display the list of books details\n ");  
        printf(" 3. Display the total no. of books in the library\n ");  
        printf(" 4. Exit\n\n");  
        printf(" Enter the choice: ");  
        scanf(" %d", &choice); 
  
        switch(choice)  
        {  
        
            case 1:  
                printf(" \nYou can add the details of the book ");  
                printf(" \nEnter the book name: ");  
                scanf(" %s", lib[i].book_name);  
                printf(" \nEnter the author name: ");  
                scanf(" %s", lib[i].author_name);  
                printf(" \nEnter the number of pages: ");  
                scanf(" %d", &lib[i].no_of_pages);  
                printf(" \nEnter the cost of the book: ");  
                scanf(" %f", &lib[i].cost);  
                count = count + 1;  
                i = i + 1;  
                break;  
  
            case 2:  
               
                if (count==0) 
				{  
                    printf(" \nThere are no books stored!!\n\n ");  
                }   
                
               else
                {   
                    printf(" \nThe list of books are: ");  
                    for(i=0; i < count; i++)  
                    {  
                        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                        printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
                        printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);  
                    }  
                }  
                
                break;  
  
            case 3:  
                printf(" \nTotal number of books in the library are: %d\n\n ", count);  
                break;  
              
            case 4:  
                exit(0);  
                  
            default:  
               
                printf(" \nInvalid number entered\n\n ");  
                
           }
				
				}while(j!=6); 
        
       
 }
  

