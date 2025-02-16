#include <stdio.h>

int main() {
    int n;

    // nhap so luong phan tu mang
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // nhap gia tri cua mang
    printf("nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // tim phan tu lon nhat trong mang
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    // in ra phân tu lon nhat
    printf("phan tu lon nhat trong mang: %d\n", max_value);

    return 0;
}

