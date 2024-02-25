#include<stdio.h>
int main()
{
	int a[6],i,j,len,next=-1;
	len=sizeof(a)/sizeof(a[i]);
	printf("enter element");       // 5 3 10 9 6 13 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);      //5 3 10 9 6 13 
	}
	printf("\n");
	for(i=0;i<len;i++)              // 0           //1     // 2    //3....            //5 
	{
		next=-1;
		for(j=i+1;j<len;j++)       // j=0+1 = 1   // j=2  //j=3                       //j=6
		{
			if(a[i]<a[j])          //5<3  5<10  //  3<10   //  10<9 -10<6 -10<13 ....  //13<..
			{
				next=a[j];              // 10   //  10     //  13 .....              // -1
				break;
		    }
        }
		printf("next bigger element of %d is %d \n",a[i],next);
	   
    }
 
	printf("next bigger element in array\n");
	for(i=0;i<len;i++)
	{
		next=-1;
		for(j=i+1;j<len;j++)
		{
		     if(a[i]<a[j])
		      {
		       	next=a[j];
		      	break;
		      }
      	}
		printf("%d\t",next);
	    
	
	}

}


