#include <stdio.h>

void inssort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];  // Store the current element (no pointer needed)
        int j = i - 1;

        // Compare arr[j] with key (value at arr[i])
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;
        }

        // Place the key in the correct position
        arr[j + 1] = key;  // Insert the key at the correct position
    }
}

int main() {
    int a;
    printf("Nhap so phan tu: ");
    scanf("%d", &a);  

    float b[a];  

    // Get array input
    printf("Nhap cac gia tri: ");
    for (int i = 0; i < a; i++) {
        scanf("%f", &b[i]);
    }

    inssort(b, a);  // Sort the array

    // Print sorted array
    printf("Mang theo thu tu tu be den lon la: ");
    for (int i = 0; i < a; i++) {
        printf("%.0f ", b[i]);
    }

    return 0;
}
