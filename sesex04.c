//
// Created by Owner on 6/26/2025.
//
#include <stdio.h>
int sum(int start, int end) {
    if (start > end) {
        return 0;
    }
}
int main() {
    int start;
    int end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    if (start > end) {
        printf("Start is greater than end");
        return 0;
    }
    int result = sum(start, end);
    printf("Result is: %d\n", result);
}