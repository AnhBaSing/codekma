#include <stdio.h>
int main(){
    int a = 0;
    for ( int b =1; b < 100; b += 2 ) {
    a += b;
    }
    printf("Tong cua cac so le la %d ", a);
}