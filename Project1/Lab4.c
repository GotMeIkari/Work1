#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    
    printf("Введите a и b: ");
    scanf("%d %d", &a, &b);
    
    printf("___________________\n");
    printf("| a*b | a+b | a-b |\n");
    printf("-------------------\n");
    printf("|%2d*%-2d|%2d+%-2d|%2d-%-2d|\n", a, b, a, b, a, b);
    printf("-------------------\n");
    printf("|%3d  |%3d  |%3d  |\n", a * b, a + b, a - b);
    printf("-------------------\n");
}
