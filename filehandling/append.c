#include<stdio.h>
int main(){
	FILE  *fptr;
	char ch;
	fptr=fopen("PQR.txt","a");
	printf("\nEnter character from keyboard\n");
	
	
	do{
       scanf("%c",&ch);
       if(ch=='$'){
       	 break;
	   }
	   	fputc(ch,fptr);
    }while(1);
	fclose(fptr);
	printf("Data Save in File");
	return 0;
}

