#include <locale.h>
#include <stdio.h>
#define ROW 9
#define COL 9

void main()
{
    int row, col;
    int x = 41;
    int y = 51;
    printf("\n");
    
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= row; col++) {
            printf("%5d", row * col);
        }
        printf("\n");
    }
    printf("\n");
    
    for (row = 1; row <= 4; ++row) {
        for (col = x; col < y; col++) {
            printf("%5d", col);
        }
        printf("\n");
        x += 10;
        y += 10;
    }
}
