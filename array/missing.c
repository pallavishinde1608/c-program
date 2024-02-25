#include<stdio.h>
int main()
{
	int a[8],len,i,temp,j,secmis;
	len=sizeof(a)/sizeof(a[0]); 
	printf("enter values\n");     // 1 3 4 6 7 8 9 1 
		for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	
    }
    printf("display ascending order");
   for(i=0;i<len;i++)
    {
		 
		for(j=i+1;j<len;j++)
		{
		 if(a[j]<a[i])
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 }
      	}
	}

			for(i=0;i<len;i++)
			{
			
		
		     printf("a[%d]=%d\n",i,a[i]);   //1 1 3 4 6 7 8 9
		 
	}
   
		printf("missing  element is \n");
	for(i=0;i<len;i++)                    //0                 //1              //2..             //3   //4.....
	{
		for(j=a[i];j<a[i+1]-1;j++)     //  j=1; 1<1-1=>1<0;  //j=1;1<3-1=>1<2   //j=3;3<4-1=>3<3..    //j=4;4<6.....
		{
			printf("%d\t",++j);                              //++1=>2                                //++4=>5...
      
	 	}
	 	
    } 
    
}
