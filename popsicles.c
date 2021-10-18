#include <stdio.h>

int main()
{
    int a,b,c;//a=brothers b=chocolates c=boxes
    scanf("%d\n%d",&a,&b);
    c=b%a;
    if(c==0){
        printf("give away");
    }
    else{
        printf("eat them yourself");
    }
    
    return 0;
}