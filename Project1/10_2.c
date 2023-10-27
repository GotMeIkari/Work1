#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

double sin_Math(int arg);
double sin_N(double x, int N);
double sin_Eps(double x, double eps);

int main() {
    sin_Math(30);
    sin_N(30*M_PI/180, 30);
}

double sin_Math(int arg) {
    printf("%lf", sin(arg*M_PI/180));
    printf("\n");
}

double sin_N(double x, int N) {
    double rez = 0;

    for (int i = 0; i < N; i++) {
        double grade = pow(-1, i);
        double upper = pow(x, 2 * i + 1);
        double lower = tgamma(2 * i + 2);
        rez += grade * (upper / lower);
    }

    printf("%lf", rez);
    printf("\n");
}
