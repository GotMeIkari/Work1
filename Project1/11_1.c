#include <locale.h>
#include <stdio.h>
#include <math.h>
#define N 10

int main()
{
    setlocale(LC_CTYPE, "RUS");
    float temp, average;
    float a[10];
    int b[10];
    
    for(int i=0; i < N; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);
        a[i] = temp;
    }
    
    for(int i=0; i < N; i++)
    {
        b[i] = a[i];
    }
    
    for(int i=0; i < N; i++)
    {
        printf("|%5d|%5.2f|%5d| \n", i, a[i], b[i]);
    }
    
    for(int i=0; i < N; i++)
    {
        average += a[i]; 
    }
    printf("Среднее арифметическое чисел в массиве: %.2f", average / N);
}
