#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct owner
{
   int fno,pno;
   char name[20];
   struct owner *next;
};
main()
{
  int park[100];
  int flat[100];
  int f=0,p1=0,i,flag,ufid,choice,count=0;
  char ch='y';
  struct owner *start,*p,*x;
  do
  {
     printf("\n 1. Add owner\n2. Search by flatno \n 3. Display owner");
     printf("\n ENter your choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
		if(count<100)
		{
		   x=(struct owner*)malloc(sizeof(struct owner));
		   printf("Enter name");
		   scanf("%s",&x->name);
		   x->fno=f+1;
		   x->pno=p1+1;
		   x->next=NULL;
		   f++;
		   p1++;
		   count++;
		  if(count==1)
		   {
		       start=x;
		       p=x;
		   }
		   else
		   {
		      p->next=x;
		      p= x;
		   }
		   printf("\n Addes successfully");
		}
		else
		{
		  printf("\n No flat is avaiable");
		}
	       break;
	case 2:
		x=start;
	       printf("\n ENter flat no");
	       scanf("%d",&ufid);
	       if(ufid<100 && ufid>0)
	       {
	       flag=0;
	       for(i=0;i<count;i++)
	       {
		   if(x->fno==ufid)
		   {
		      printf("%d    %s   %d",x->fno,x->name,x->pno);
		      flag=1;
		   }
		 x=x->next;
	       }
	       if(flag==0)
	       {
		  printf("\n Given falt is not allocated");
	       }
	       }
	       else
		 printf("\n Invalid flat no");

	       break;
	case 3:
		x=start;
		for(i=0;i<count;i++)
		{
		    printf("\n %d  %s  %d",x->fno,x->name,x->pno);
		    x=x->next;
		}

      }
    printf("\n Do you want to continue(y/n)?");
    ch=getch();
  }while(ch=='y');
printf("thank you");
return 0;
}
