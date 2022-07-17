#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,c,d;
    printf("enter a number");
    scanf("%d",&n);
    a=n/10;
    b=n%10;

    c=b*100;
    d=c+a;

    printf("%d",d);
    return 0;
}
