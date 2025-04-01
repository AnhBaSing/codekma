#include <stdio.h>

int main(){
    int a[10];
    printf("Nhap 10 so nguyen: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]); 
    }
    int *ptr = a; 
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(ptr + i));  // Access each value with pointer
    }
    return 0;
}
