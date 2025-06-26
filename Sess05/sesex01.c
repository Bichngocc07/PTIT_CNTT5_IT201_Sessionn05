//
// Created by Owner on 6/26/2025.
//
#include <stdio.h>
int main() {
    int so;
    printf("Nhap vao 1 so nguyen:\n");
    scanf("%d", &so);
    if (so > 1) {
        printf("Nhap vao 2 so nguyen:\n");
    } else {
        printf("Nhap vao 2 so nguyen:\n");
        inNhiPhan(so);
        printf("\n");
    }
    return 0;
}