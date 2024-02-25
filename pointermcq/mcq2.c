void main() {
 int a[] = {1,2,3,4,5}, *p;
 p = a;
 ++*p;   //++0===> 1
 printf("%d ", *p);//value of index 1 is 2
 p += 2;     //0+2===>2
 printf("%d ", *p);//value of index 2 is 3
}
