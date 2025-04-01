//https://craftofcoding.wordpress.com/wp-content/uploads/2020/06/decimal2binaryrec.jpg
#include <stdio.h>

void bin(int x) {
    if (x == 0) return;
    bin(x / 2);
    printf("%d", x % 2);
}

void hex(int x) {
    if (x == 0) return;
    hex(x / 16);
    int temp = x % 16;
    if (temp < 10) printf("%d", temp);
    else printf("%c", temp - 10 + 'A');  // ASCII 65-70 (A,B,C,D,E)
}

void oct(int x) {
    if (x == 0) return;
    oct(x / 8);
    printf("%d", x % 8);
}

int main() {
    int a;
    printf("Nhap so thap phan: ");
    scanf("%d", &a);

    printf("Co so 16: ");
    if (a == 0) printf("0");
    else hex(a);
    printf("\n");

    printf("Co so 8: ");
    if (a == 0) printf("0");
    else oct(a);
    printf("\n");

    printf("Co so 2: ");
    if (a == 0) printf("0");
    else bin(a);
    printf("\n");

    return 0;
}
//bin(13)
//├── 10 * bin(6)  + (13 % 2) = 10 * 110 + 1 = 1101
//│    ├── 10 * bin(3)  + (6 % 2)  = 10 * 11 + 0 = 110
//│    │    ├── 10 * bin(1)  + (3 % 2) = 10 * 1 + 1 = 11
//│    │    │    ├── 10 * bin(0)  + (1 % 2) = 10 * 0 + 1 = 1
//│    │    │    ├── Base Case: bin(0) returns 0

//oct(756)
//└── oct(94)     (756 / 8 = 94, remainder = 4)
//└── oct(11) (94 / 8 = 11, remainder = 6)
//    └── oct(1) (11 / 8 = 1, remainder = 3)
//        └── oct(0) (1 / 8 = 0, remainder = 1, STOP)

//hex(756)
//└── hex(47)        (756 / 16 = 47, remainder = 4)
//└── hex(2)     (47 / 16 = 2, remainder = 15)
//    └── hex(0) (2 / 16 = 0, remainder = 2, STOP)