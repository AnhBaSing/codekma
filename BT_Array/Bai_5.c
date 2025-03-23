#include <stdio.h>

int main(){
    int x, check, temp, alcheck;
    
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    
    int a[x];  
    int checked[x], checkedsize = 0; 

    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < x; i++ ){
        check = 0;
        temp = a[i];
        alcheck = 0;

        // Check if temp was already counted
        for (int z = 0; z < checkedsize; z++ ){
            if (checked[z] == temp){
                alcheck = 1;
                break;
            }
        }
        if (alcheck) {
            continue; // Skip already counted numbers
        }

        // Count occurrences of temp
        for (int j = 0; j < x; j++) {
            if (a[j] == temp) {
                check++;
            }
        }

        checked[checkedsize++] = temp; // Store counted number
        
        printf("So %d xuat hien trong mang %d lan\n", temp, check);
    }
}
