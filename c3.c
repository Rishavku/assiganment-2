#include<stdio.h>
int main()
{
   int a,b,c;
   printf ("enter two digit");
   scanf ("%d\n %d",&a,&b);
   c=a+b;
   a=c-a;
   b=c-b;
   printf ("a=%d b=%d",a,b);  
    return 0;
}
