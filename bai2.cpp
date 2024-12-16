#include <stdio.h>

int main() {
    int num;

    printf("Nhap so can kiem tra: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d la so chan.\n", num);
    } else if (num % 2 != 0) {
        printf("%d la so le.\n", num);
    } else {
        printf("0.\n");
    }

    return 0;
}