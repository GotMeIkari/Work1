#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define SIZE 100

double func(double x);

int main() {
    double x = 1;
    double rez = 0;
    int below_zero = 0;
    int upper_zero = 0;
    double a[100];
    
    for (int i = 0; i < SIZE; ++i) {
        a[i] += func(x);
        x += 0.02;
    }
    
    for (int i = 0; i < SIZE; ++i) {
        if (a[i] > 0) {
            rez += a[i];
            upper_zero += 1;
        } else below_zero += 1;
    }
    
    printf("a | %d | %d | %.3lf", upper_zero, below_zero, rez / SIZE);
}

double func(double x) {
    double y;
    y = pow(x, 2) - pow(cos(3.14*x), 2);
    return y;
}
