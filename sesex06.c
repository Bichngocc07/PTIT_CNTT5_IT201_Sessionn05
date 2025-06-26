//
// Created by Owner on 6/26/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("Moi ban nhap so nguyen bat ki");
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++) {
        printf("nhap cac so nguyen %d ");
        scanf("%d", &arr[i]);
    }
    int sum (int arr[],int n){
        if (n<1) {
            return 0;
        }
        return arr[n-1]+sum(arr,n-1);
    }
}