#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LIMIT 40

int main() 
{
char ch;
char s[MAX_LIMIT];
char sen[MAX_LIMIT];

scanf("%c",&ch);
scanf("%s",&s);
scanf("\n");
scanf("%[^\n]%*c",&sen);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
