#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double n = 30;
    double sin(double n);
    printf("����� %.lf �������� ����� = %.2lf", n, sin(n * (M_PI / 180)));
}