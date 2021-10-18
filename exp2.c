
#include <stdio.h>

int main()
{
        int a,b;
        int i=9;
        printf("enter the value of a");
        scanf("%d",&a);
        printf("\n enter the value of b");
        scanf("%d",&b);
        for(i=1; i<=9; i++)
        if(a==1 || b==1)
        {
            printf("\n one");
        }
           if(a==2 || b==2)
        {
            printf("\n two");
        }
           if(a==3 || b==3)
        {
            printf("\n three");
        }
           if(a==4 || b==4)
        {
            printf("\n four");
        }
           if(a==5 || b==5)
        {
            printf("\n five");
        }
           if(a==6 || b==6)
        {
            printf("\n six");
        }
           if(a==7 || b==7)
        {
            printf("\n seven");
        }
           if(a==8 || b==8)
        {
            printf("\n eight");
        }
        else
       {
           printf("\n greater than 9");
       }
    

    return 0;
}