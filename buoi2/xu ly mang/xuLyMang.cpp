#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
    	printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep theo thu tu tang dan.\n");
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep theo thu tu giam dan.\n");
}

void timPhanTu(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Phan tu %d duoc tim thay o chi muc %d.\n", key, i);
            return;
        }
    }
    printf("Khong tim thay phan tu %d.\n", key);
}

void chenPhanTu(int arr[], int *n, int pos, int value) {
    if (*n >= MAX_SIZE || pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
    printf("Da chen phan tu.\n");
}

void xoaPhanTu(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa phan tu.\n");
}

void daoPhanTu(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Da dao mang.\n");
}

int main() {
    int arr[MAX_SIZE], n = 0, choice, key, pos, value;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Sap xep theo thu tu tang dan\n");
        printf("4. Sap xep theo thu tu giam dan\n");
        printf("5. Tim kiem gia tri phan tu\n");
        printf("6. Chen phan tu\n");
        printf("7. Xoa phan tu\n");
        printf("8. Dao phan tu\n");
        printf("9. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
            	inMang(arr, n);
                break;
            case 3:
                sapXepTangDan(arr, n);
                break;
            case 4:
                sapXepGiamDan(arr, n);
                break;
            case 5:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &key);
                timPhanTu(arr, n, key);
                break;
            case 6:
                printf("Nhap vi tri va gia tri cua phan tu: ");
                scanf("%d %d", &pos, &value);
                chenPhanTu(arr, &n, pos, value);
                break;
            case 7:
                printf("Nhap vi tri cua phan tu can xoa: ");
                scanf("%d", &pos);
                xoaPhanTu(arr, &n, pos);
                break;
            case 8:
                daoPhanTu(arr, n);
                break;
            case 9:
                printf("Dang thoat...\n");
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }
    }
    return 0;
}

