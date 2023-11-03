#include <locale.h>
#include <stdio.h>
/*подключаемые заголовочные файлы*/
#define ROW 6
#define COL 10
#define ROW_1 (int[COL]){5, 3, 0, 8, 7, 2, 1, 9, 6, 4} 
#define ROW_2 (int[COL]){6, 8, 4, 9, 3, 5, 7, 2, 1, 0}
#define ROW_3 (int[COL]){0, 7, 3, 2, 6, 1, 4, 5, 8, 9}
#define ROW_4 (int[COL]){2, 5, git1, 4, 3, 0, 8, 9, 7, 6}
#define ROW_5 (int[COL]){7, 0, 3, 5, 8, 4, 6, 2, 1, 9}
/*константы для настройки работы приложения*/

void draw_screen(int game_tablet[ROW][COL], int, int);
/*конструктор для структуры draw_screen*/

int main()
{
    setlocale(LC_ALL, "RUS");
    const int height = ROW;
    const int width = COL;
    /*указание размеров игрового поля для 
    передачи значений в функцию отрисовки */
    
    int game_tablet[ROW][COL] = {
        {5, -1, 0, -1, 7, -1, 1, -1, -1, -1}, 
        {6, 8, 4, 9, -1, 5, -1, 2, 1, 0}, 
        {-1, -1, -1, -1, 6, 1, -1, 5, -1, 9}, 
        {-1, -1, -1, 4, -1, -1, 8, -1, 7, -1}, 
        {7, -1, 3, 5, -1, -1, 6, -1, 1, 9},
        {20, 23, 11, 28, 27, 12, 26, 27, 23, 28}
    }; /*указание начального игрового поля*/
    
    draw_screen(game_tablet, height, width);
    /*функция отрисовки игрового поля
    game_tablet - двумерный массив
    height - высота поля (кол-во строк)
    width - ширина поля (кол-во столбцов)*/
}


void draw_screen(int game_tablet[ROW][COL], int height, int width) {
    for (int i = 0; i < height; ++i) {
        printf("___________________________________________________");
        printf("\n");
        
        for (int j = 0; j < width; j++) {
            printf("| %2d ", game_tablet[i][j]);
        }
        printf("|\n");
    }
}
