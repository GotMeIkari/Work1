#include <stdio.h>
#include <locale.h>
#include <math.h>
double sin(double x, int terms) {

    double result = 0;
    int n;
    for (n = 0; n < terms; n++) {
        double coefficient = pow(-1, n);
        double numerator = pow(x, 2 * n + 1);
        double denominator = tgamma(2 * n + 2);
        result += coefficient * (numerator / denominator);
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    double x;
    int n;
    printf("Введите угол x в радианах: ");
    scanf("%lf", &x);//0,5235987756 для 30 гр
    printf("Введите количество членов ряда Тейлора: ");
    scanf("%d", &n);//30

    printf("sin(%lf) = %lf\n", x, sin(x, n));
    return 0;
}