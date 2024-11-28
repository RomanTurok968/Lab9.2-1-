#include <stdio.h>
#include <conio.h>
#include <math.h>


// Макроси для обчислень
#define SQR(x, y) (((x) - (y)) * ((x) - (y))) 
#define ABS(y, x) (((y) - (x)) < 0 ? -((y) - (x)) : ((y) - (x))) 
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#define MIN(a, b) ((a) < (b) ? (a) : (b)) 
#define PRINTI(w) puts("Control output"); printf(#w " = %d\n", w) 
#define PRINTR(w) puts("Result :"); printf(#w " = %f\n", (float)(w))

void main() {
    
    int x, y, z;
    float w; // Змінено на float для точного обчислення
    char ch;

    do {
        // Введення значень x, y, z
        puts("Input integer values for x, y, z:");
        scanf("%d %d %d", &x, &y, &z);

        // Умови обчислення w
        if (z == 1) {
            w = MIN(SQR(x, y), ABS(y, x)); // Використовуємо формулу для z = 1
        }
        else {
            w = MAX(x + SQR(y, 0), z + SQR(x, 0)); // Використовуємо формулу для z != 1
        }

        // Вивід результату
        PRINTR(w);

        // Повторне виконання
        puts("Repeat? y/n ");
        ch = getch();
    } while (ch == 'y');
}
