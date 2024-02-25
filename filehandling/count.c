#include<stdio.h>
#include<string.h>
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
	   	
    }while(1);
	fclose(fptr);
	printf("Data Save in File\n");
	
	//2.count vowels and consonent
	
	printf("\n\ncount vowels and consonant\n");
	 int cv=0,cc=0;
	 char ch1;
	 
	 char ch2;
	int cd=0,cs=0,cchar=0,sum=0;
	fptr=fopen("C:\\Users\\hp\\Desktop\\c program\\filehandling\\ABC.txt","r");
	do{
	 ch1=fgetc(fptr);
	 //display data
	 printf("%c",ch1);
	if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u' || ch1=='A' || ch1=='E' || ch1=='I' || ch1=='O' || ch1=='U')
	{
		cv++;	
	}
	
	else{
	
		cc++;
	}
		if(ch1==-1)
		{
			break;
		}

}while(1);
	fclose(fptr);
		printf("\nvowels=%d\n",cv);
	    printf("consonent=%d",cc);
	
	//3.count digit special symbol character
	
	printf("\n\ncount digit special symbol character\n");
	
	fptr=fopen("C:\\Users\\hp\\Desktop\\c program\\filehandling\\ABC.txt","r");
	do{
	         ch2=fgetc(fptr);
	         
		if((ch2>='a' && ch2<='z' ) || (ch2>='A'&& ch2<='Z'))
		{
			cchar++;
		}
		  else if(ch2>='0' && ch2<='9')
		   {
			cd++;
			sum=sum+ch2-'0';
		    }
	     	else{
	         
			   cs++;
	     	} 
		if(ch2==-1)
		  {
			break;
		}
	}
	while(1);
	fclose(fptr);
	printf("\ncharacter = %d",cchar);
	printf("\ndigit = %d\n",cd);
	printf("special symbol=%d",cs);
	printf("\nsum of digit =%d",sum);
	
	return 0;
}
