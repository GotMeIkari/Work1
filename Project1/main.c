#include <stdio.h>
#include <locale.h>
int row_screen(int);

int main()
{
    int row_1[10] = {5, 0, 0, 0, 7, 0, 1, 0, 0, 0};
    int row_2[10] = {6, 8, 4, 9, 0, 5, 0, 2, 1, 0};
    int row_3[10] = {0, 0, 0, 0, 6, 1, 0, 5, 0, 9};
    int row_4[10] = {0, 0, 0, 4, 0, 0, 8, 0, 7, 0};
    int row_5[10] = {7, 0, 3, 5, 0, 0, 6, 0, 1, 9};
    int row_6[10] = {20, 23, 11, 28, 27, 12, 26, 27, 23, 28};
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_1[i]);
    }
    printf("|\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_2[i]);
    }
    printf("|\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_3[i]);
    }
    printf("|\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_4[i]);
    }
    printf("|\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_5[i]);
    }
    printf("|\n");
    printf("___________________________________________________");
    printf("\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|%3d ", row_6[i]);
    }
    printf("|\n");
}    
