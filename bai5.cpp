#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap vao so thu ba: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        printf("So thu ba nam giua so thu nhat va so thu hai.\n");
    } else {
        printf("So thu ba khong nam giua so thu nhat va so thu hai.\n");
    }

    return 0;
}