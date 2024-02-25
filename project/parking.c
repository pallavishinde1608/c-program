#include<stdio.h>
#include<stdlib.h>
struct owner
{
	int fno;
	char name[90];
    int pno;
    struct owner *next;
};

int main()
{
   
    char ch='y';
	int park[100];
	int flat[100];
	int f=0,p1=0,choice,count=0,i,flag,ufid;
	 struct owner *start ,*p,*x;
	do{
		printf("\n\n1.Add owner\n2.Search by flat number\n3.Display owner\n");
		printf("\nenter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			
	   	    case 1:
	   	    	if(count<100)
	   	    	{
	   	    		x=(struct owner*)malloc(sizeof(struct owner));
	   	    		printf("enter name\n");
	   	    		scanf("%d",&x->name);
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
					   else{
					   	p->next=x;
					   	p=x;
					   }
					   
	   	    		printf("\nAdd successfully\n");
	   	    	    
	   	    	}
	   	    	else
	   	        {
	   	        	printf("\nflat not available\n");
		    	}
				   break;
				   case 2:
				   	x=start;
				   	printf("\nenter flat number\n");
				   	scanf("%d",&ufid);
				   	if(ufid<100 && ufid>0)
				   	{
				   	flag=0;
				   	for(i=0;i<count;i++)
				   	{
				   		if(x->fno==ufid)
				   		{
				   			printf("%d %s %d",x->fno,x->name,x->pno);
				   			flag=1;
						   }
						   x=x->next;
					   }
					   if(flag==0)
					   {
					   	printf("\n given flat not allocated\n");
					   }
				}
				else
					printf("\nInvalid flat no\n");
			break;
				   case 3:
				   	x=start;
				   	for(i=0;i<count;i++)
				   	{
				   		printf("\n%d %s %d",x->fno,x->name,x->pno);
				   		x=x->next;
					}
				}
				
				printf("\nDo you want to continue(y/n)?");
				ch=getch();
}while(ch=='y');
    printf("thank you");
    return 0;
}
