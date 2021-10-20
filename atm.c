#include <stdio.h>

int main()
{
    int a,b,c;//a=withdraw b=bankbalance c=tax
    scanf("%d %d",&a,&b);
    if(a%5==0 && b>=a){
        c= b-a-0.5;
        printf("%d",c);
    }
    else{
        printf("%d", b);
    }
    return 0;
}
