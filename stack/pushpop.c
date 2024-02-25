#include<stdio.h>
	

	void main()
	{
	   int stack[5],top=-1,i,value,choice,max;
	   max=sizeof(stack)/sizeof(stack[0]);
	   char ch;
	   do{
	    printf("\n1:PUSH\n");
	    printf("2:DISPLAY\n");
	    printf("3:POP\n");
    printf("enter your choice\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	       case 1:
		if(top==(max-1))
		{
		  printf("Stack is overflow\n");
		}
		else{
		   top = top +1;
		   printf("\nEnter value in stack\n");
		   scanf("%d",&value);
		   stack[top]=value;
		}
	       break;
	       case 2:
	       if(top==-1)
	       { printf("\nstack is undefflow\n");
	       }
	       else{
		for( i=top;i>=0;i--)
		{ printf("stack[%d] --->%d\n",i,stack[i]);
		}
	       }
	       break;
	       case 3:
		 if(top==-1)
		 {  printf("\nstack is undeflow\n");
		 }
		 else{
		   value=stack[top];
		   top = top-1;
		   printf("\ndelete value is %d\n",value);
		 }
		 break;
	       default:
	       printf("Wrong choice\n");
	    }
	    printf("\nDo you want to continue\n");
	    scanf("%c",&ch);
	    ch=getch();
	    
	   }while(ch=='y' || ch=='Y');
	    getch();
	}


 

