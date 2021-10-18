#include <stdio.h>

int main() {
   int i;
   for(i=1; i<=50; ++i){
       if(i%5==0){
           printf("hooray\n");
       }
       else{
           printf("%d\n", i);
       }
   }
    
    return 0;
}