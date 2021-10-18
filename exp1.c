
#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the number is a even number");
    }
    else if(a%3==0)
    {
        printf("the number is a odd number");
    }
    else
    {
        printf("the number is a prime number");
    }

    return 0;
}
