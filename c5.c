#include<stdio.h>
int main()
{
    int n,r,s;
    printf("enter a number");
    scanf("%d",&n);
    for(s=0; n>0;)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("The sum is %d",s);
return 0;
    
}
