#include <stdio.h>

int main() {
    int a, b, sum = 0;  // Initialize sum to store total
    
    for (a = 0; a < 10; a++) {
        printf("Nhap so: ");
        scanf("%d", &b);
        sum += b;  // Add b to sum 
    }
    
    printf("Tong 10 so da nhap la %d\n", sum);  // Print total sum
    
    return 0;
}
