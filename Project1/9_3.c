#include <locale.h>
#include<stdio.h>

void builder(char, int);

int main()
{   
    char figure;
    int height;
    
    printf("Введите символ из которого будет строиться фигура: ");
    scanf("%c", &figure);
    
    printf("Введите высоту: ");
    scanf("%d", &height);
    
    builder(figure, height);
}

void builder(char symbol, int rows) {
    printf("Построение треугольника: \n");
    
    for (int i = 0; i < rows; i++)
    { 
        for (int c = 0; c <= (rows - i); c++)
            printf(" ");
            for (int c = 0; c <= i; c++)
                printf("%c ", symbol);
            printf("\n");
        }
}