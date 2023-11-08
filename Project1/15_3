#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define N 2
#define M 22

int rand_massive(int massive[N][M]);
int win_lose(int massive[N][M]);

int main() {
    setlocale(LC_CTYPE, "RUS");
    int massive[N][M];
    
    rand_massive(massive);
    printf("\n");
    win_lose(massive);
}

int rand_massive(int massive[N][M]) {
    printf("СТАТИСТИКА КОМАНДЫ\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            massive[i][j] = rand() % (10 - 0 + 1);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("| %3d ", massive[i][j]);
        }
        printf("|\n");
    }
}

int win_lose(int massive[N][M]) {
    int win_counter = 0;
    int lose_counter = 0;
    
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < M; j++) {
            if (massive[i][j] > massive[i + 1][j]) {
                win_counter++;
            } else lose_counter++;
        }
    }
    
    printf("Количество побед: %d\n", win_counter);
    printf("Количество поражений: %d", lose_counter);
}
