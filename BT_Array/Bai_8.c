#include <stdio.h>

int main(){
    int n1,n2,n3,temp;
    int a[10000], b[10000], c[10000];
    printf("Nhap kich thuoc mang 1: ");
    scanf("%d", &n1);
    printf("Nhap cac phan tu mang 1: ");
    for (int i = 0; i < n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Nhap kich thuoc mang 2: ");
    scanf("%d", &n2);
    printf("Nhap cac phan tu mang 2: ");
    n3=n1+n2; // Merged array size
    for (int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }
    // Merge 2 arrays into 1
    for (int i = 0; i < n1; i++){
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++){
        c[i+n1] = b[i];
    }
    // Ascending order sort
    for (int i = 0;i<n3;i++){
        for (int j = i+1;j<n3;j++){
            if (c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("Cac phan tu da duoc sap xep o mang 3 la ");
    for (int i = 0;i<n3;i++){
        printf("%d ",c[i]);
    }
}