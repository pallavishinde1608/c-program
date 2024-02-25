#include<stdio.h>
void printAlphabet(char ch)
{
	if(ch<='z')
	{
		printf("%c\n",ch);
	     ch++;
		printAlphabet(ch);
	}
}
int main()
{ 
   char ch='a';
	printAlphabet(ch);
}
