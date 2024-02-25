#include<stdio.h>
void main()
{
	char ch[5],count=0;                           //char *ptr;
	printf("enter name");
	gets(ch);                                    //ptr=ch;                      //ptr=&ch[0];
	while(ch[count]!='\0')                        //while(*ptr !='\0')
	{
		count++;                                  //count++
		                                           //ptr++
	}
	printf("length is %d",count);
}

   
   
   /*#include<stdio.h>
int count=0;
int getStringLen(char ch[])
{                                    
	if(ch[count]!='\0')                        
	{
		count++;
		return getStringLen(ch);                                  
		                                        
	}
	else
	{
		return count;
    }
}
int main()
{
	char ch[5];                          
	printf("enter name");
	gets(ch);                                                         
   int l=getStringLen(ch);
	printf("length is %d",l);
}*/
