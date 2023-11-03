#include <locale.h>
#include <stdio.h>
#define ROW 6
#define COL 10

#define ROW_1 (int[COL]){5, 3, 0, 8, 7, 2, 1, 9, 6, 4} 
#define ROW_2 (int[COL]){6, 8, 4, 9, 3, 5, 7, 2, 1, 0}
#define ROW_3 (int[COL]){0, 7, 3, 2, 6, 1, 4, 5, 8, 9}
#define ROW_4 (int[COL]){2, 5, git1, 4, 3, 0, 8, 9, 7, 6}
#define ROW_5 (int[COL]){7, 0, 3, 5, 8, 4, 6, 2, 1, 9}

int main()
{
    setlocale(LC_ALL, "RUS");
    
    int game_tablet[ROW][COL] = {
        {5, -1, 0, -1, 7, -1, 1, -1, -1, -1}, 
        {6, 8, 4, 9, -1, 5, -1, 2, 1, 0}, 
        {-1, -1, -1, -1, 6, 1, -1, 5, -1, 9}, 
        {-1, -1, -1, 4, -1, -1, 8, -1, 7, -1}, 
        {7, -1, 3, 5, -1, -1, 6, -1, 1, 9},
        {20, 23, 11, 28, 27, 12, 26, 27, 23, 28}
    };

}
