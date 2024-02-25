//viewbook.h
#include "searchbook.h"
#include "filepath.h"
#include "bookmodel.h"
void getBooks()
{
	fptr=fopen("ABC.txt","r");
	 while(fscanf(fptr,"%s%s%d%d",&b.name,&b.author,&b.id,&b.price)!=-1)
	 {
	 	printf("%s\t%s\t%d\t%d\n",b.name,b.author,b.id,b.price);
	 }	
	 
	}


