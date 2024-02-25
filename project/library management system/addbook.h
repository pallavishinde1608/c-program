//addbook.h
#include "bookmodel.h"
#include <stdio.h>
#include "filepath.h"
void addBook(struct Book b)
{
	fptr=fopen("ABC.txt","a");
	if(fptr==NULL)
	{
		printf("File Path not found");
	}
	else
	  {
		fprintf(fptr,"%s\t%s\t%d\t%d\n",b.name,b.author,b.id,b.price);
		printf("Book Added Successfully...................");
		fclose(fptr);
	}
}

