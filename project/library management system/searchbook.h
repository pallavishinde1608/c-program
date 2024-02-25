//searchbook.h
#include "searchbook.h"
#include "filepath.h"
int searchBook(int bookid){
	fptr=fopen("ABC.txt","r");
	int flag=-1;
	while(fscanf(fptr,"%s%s%d%d",&b.name,&b.author,&b.id,&b.price)!=-1){
		  if(b.id==bookid){
		  	flag=1;
		  	break;
		  }
	}
	return flag;
}

