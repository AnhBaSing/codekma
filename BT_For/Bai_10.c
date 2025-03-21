#include <stdio.h>   

int main() {  
 int n1=0,n2=1,n3,i,sopt;  
 printf("Hay nhap so phan tu trong day Fibonacci: ");  
 scanf("%d",&sopt);  
 printf("Day Fibonacci thu %d la \n%d %d",sopt, n1,n2); 
 for(i=2;i<sopt;++i)   //The loop start from 2 
 {  
  n3=n1+n2;  // n3 = 3
  printf(" %d",n3);  
  n1=n2;  // n1 = 2
  n2=n3;  // n2 = 3
 }
}  