#include <stdio.h>

int main() {
    int num;

    printf("Nhap so can kiem tra: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        if (num % 5 == 0) {
            printf("%d chia het cho 3 va 5.\n", num);
        } else {
            printf("%d chia het cho 3.\n", num);
        }
    } else if (num % 5 == 0) {
        printf("%d chia het cho 5.\n", num);
    } else {
        printf("%d ko chia het cho 3 va 5.\n", num);
    }

    return 0;
}