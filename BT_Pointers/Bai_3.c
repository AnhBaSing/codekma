#include <stdio.h>

void in(int a, float b[]) {
    for (int i = 0; i < a; i++) {  
        scanf("%f", &b[i]);  
    }
}

int main() {
    int a;
    printf("Nhap so phan tu: ");
    scanf("%d", &a);  

    float b[a];  
    in(a, b);  

    // Pointers to store min and max values
    float *min = &b[0], *max = &b[0]; 

    for (int i = 1; i < a; i++) {
        if (b[i] > *max) {  
            max = &b[i];  // Update pointer to new max
        }
        if (b[i] < *min) {  
            min = &b[i];  // Update pointer to new min
        }
    }

    printf("So lon nhat la %.2f va so be nhat la %.2f\n", *max, *min);
    return 0;
}
