#include <stdio.h>

int main() {
    int a, b;
    
    //Nhap gia tri a hoac b
    printf("Nhap gia tri cua A: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua B: ");
    scanf("%d", &b);
    
    if(a > b) 
         printf("a lon hon b");
    else 
         printf("a khong lon hon b");
    
    return 0;
}
