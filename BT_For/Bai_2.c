#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Kiem tra so duoc nhap co phai la so nguyen to: ");
    scanf("%d", &a);
    if ( a < 2 ){
        printf("%d khong la so nguyen to", a);
    }
    else if ( a==2  ){ // 2 is the only even prime number
        printf("%d la so nguyen to.\n", a);
    }
    for(b = 2; b <= sqrt(a); b++) {
            if ( a % b == 0 ) {
                b = 0; // When a % b ==0, b is linked to 0 to break the loop
                break;
            }
        }
    if (b){ // When b, a is prime number
        printf("%d la so nguyen to", a);
    } else {
        printf("%d khong phai la so nguyen to", a);
    }
    return 0; // End checking quickly    
}