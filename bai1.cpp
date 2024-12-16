#include <stdio.h>

int main() {
    int num;

    printf("Nhap so can kiem tra: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d la so duong.\n", num);
    } else if (num < 0) {
        printf("%d la so am.\n", num);
    } else {
        printf("0.\n");
    }

    return 0;
}