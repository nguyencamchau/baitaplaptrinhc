#include <stdio.h>

<<<<<<< HEAD
int main(void) {
    float a, b, c;
    printf("Nhap diem 3 mon (0-10): ");
    if (scanf("%f%f%f", &a, &b, &c) != 3 ||
        a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10) {
        printf("Diem khong hop le.\n");
        return 1;
    }
    printf("Diem trung binh = %.2f\n", (a+b+c)/3.0f);
=======
int main(void)
{
    float a, b, c;
    printf("Nhap diem 3 mon (0-10): ");
    if (scanf("%f%f%f", &a, &b, &c) != 3 ||
        a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10)
    {
        printf("Diem khong hop le.\n");
        return 1;
    }
    printf("Diem trung binh = %.2f\n", (a + b + c) / 3.0f);
>>>>>>> ba73b77 (main)
    return 0;
}
