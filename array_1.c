#include<stdio.h>

int main(){
    int a,b;
    scanf("%d\n%d", &a, &b);
    int array[]={1,2,3,4,5};
    printf("%d",array[a-b]);
    return 0;
}