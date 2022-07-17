#include<stdio.h>
int main()
{ 
    int a,r,c=0;
    printf("enter your number");
    scanf("%d",&a);
    for(r=0;a>=0;)
    {
    r=a&1;
    c++;
    if (r==1)
    {
        printf("%d",c);
        break;
    }
    
        a=a>>1;
    }
    
    return 0;
}
