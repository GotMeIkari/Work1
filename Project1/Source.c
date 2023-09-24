#include<stdio.h>
#include<locale.h>
 
int main()
{
    int L = 2333;
    float n = 3;
    int k = 3;
    int m = 5;
    setlocale(LC_ALL, "RUS");
    
    printf("%-4.0f\n%-5d\n__________\n\n%0+10.5f", n, L, n / L);
    
    return 0;
}
