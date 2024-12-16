#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    printf("Thu tu tang dan: %d %d %d\n", num1, num2, num3);

    return 0;
}