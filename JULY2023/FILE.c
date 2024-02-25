#include<stdio.h>
int main(){
	FILE  *fptr;
	char ch;
	fptr=fopen("ABC.txt","w");
	printf("\nEnter character from keyboard\n");
	
	
	do{
       scanf("%c",&ch);
       if(ch=='$'){
       	 break;
	   }
	   	fputc(ch,fptr);
    }while(1);//infinite loop
	fclose(fptr);
	printf("Data Save in File\n");
	//1.display data
	fptr=fopen("ABC.txt","r");
	do{
		ch=fgetc(fptr);
		printf("%c",ch);
		if(ch==-1)
		{
			break;
		}
	}while(1);
	fclose(fptr);
	
	
	
	return 0;
}


