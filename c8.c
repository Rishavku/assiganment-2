#include<stdio.h>   
int main(int argc, char const *argv[])
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if (n&1)
    
        printf("odd number");

    else
    printf("even number");
    return 0;
}
