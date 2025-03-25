#include <stdio.h>
int main(){
    int i = 1;
    while (i<20,++i){
        if (i % 2 == 0){
            printf("%d ", i);    
        } else if ( i > 20){
            break;
        }
    }
    return 0;
}