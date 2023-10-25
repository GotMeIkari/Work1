#include <stdio.h>
#include <locale.h>
#include <math.h>

double sin(double x, int terms) {

    double result = 0;
    int n;
    for (n = 0; n < terms; n++) {
        double k = pow(-1, n);
        double num = pow(x, 2 * n + 1);
        double denom = tgamma(2 * n + 2);
        result += k * (num / denom);
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    double x;
    int n;
    printf("Ââåäèòå óãîë x â ðàäèàíàõ: ");
    scanf("%lf", &x);//0,5235987756 äëÿ 30 ãð
    printf("Ââåäèòå êîëè÷åñòâî ÷ëåíîâ ðÿäà Òåéëîðà: ");
    scanf("%d", &n);//30

    printf("sin(%lf) = %lf\n", x, sin(x, n));
    return 0;
}
