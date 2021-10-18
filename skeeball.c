#include <stdio.h>

int main()
{
    int points, value, tickets;
    scanf("%d\n%d",&points,&value);
    tickets = points/12;
    if(tickets>=value){
        printf("Buy it!");
    }
    else{
        printf("Try again");
    }

    return 0;
}
