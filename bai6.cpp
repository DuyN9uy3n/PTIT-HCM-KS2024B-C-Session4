#include <stdio.h>

int main() {
    int dauThang, cuoiThang;
    double soKW, tienDien;

    printf("Nhap chi so dau thang: ");
    scanf("%d", &dauThang);

    printf("Nhap chi so cuoi thang: ");
    scanf("%d", &cuoiThang);

    soKW = cuoiThang - dauThang;

    if (soKW <= 50) {
        tienDien = soKW * 10000;
    } else if (soKW <= 100) {
        tienDien = 50 * 10000 + (soKW - 50) * 15000;
    } else if (soKW <= 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soKW - 100) * 20000;
    } else if (soKW <= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soKW - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soKW - 200) * 30000;
    }

    printf("So tien dien phai tra: %.2lf dong\n", tienDien);

    return 0;
}