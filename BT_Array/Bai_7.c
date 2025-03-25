#include <stdio.h>
int main(){
    int x,temp;
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++){
        for (int j = i + 1; j < x; ++j) {
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++){
        printf("%d ", a[i]);
    }
}