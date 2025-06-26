//
// Created by Owner on 6/26/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("nhap vao so nguyen duong ");
    scanf("%d", &n);
    if (n<=0) {
        printf("khong hop le");
    }else {
        int tong = tongChuSo(n);
        printf("tong = %d", tong);
    }
    return 0;
}
int tongChuSo(int n) {
    if (n<=0) {
        printf("khong hop le");
        return 0;
    }
}