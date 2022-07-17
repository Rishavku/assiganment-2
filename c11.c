#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ,b,c,n;
    printf("enter your number and digit");
    scanf ("%d %d",&n,&a);
    b=n*10;
    c=b+a;
    printf("%d",c);
    return 0;
}
