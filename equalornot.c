
#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter the values of b");
    scanf("%d",&b);
    a=b%2;
    printf("%d",a);
    if(a==0)
    {
        printf("even");
    }
    else 
    {
        printf("odd");
    }

    return 0;
}