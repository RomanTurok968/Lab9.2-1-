#include <stdio.h>
#include <conio.h>
#include <math.h>


// ������� ��� ���������
#define SQR(x, y) (((x) - (y)) * ((x) - (y))) 
#define ABS(y, x) (((y) - (x)) < 0 ? -((y) - (x)) : ((y) - (x))) 
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#define MIN(a, b) ((a) < (b) ? (a) : (b)) 
#define PRINTI(w) puts("Control output"); printf(#w " = %d\n", w) 
#define PRINTR(w) puts("Result :"); printf(#w " = %f\n", (float)(w))

void main() {
    
    int x, y, z;
    float w; // ������ �� float ��� ������� ����������
    char ch;

    do {
        // �������� ������� x, y, z
        puts("Input integer values for x, y, z:");
        scanf("%d %d %d", &x, &y, &z);

        // ����� ���������� w
        if (z == 1) {
            w = MIN(SQR(x, y), ABS(y, x)); // ������������� ������� ��� z = 1
        }
        else {
            w = MAX(x + SQR(y, 0), z + SQR(x, 0)); // ������������� ������� ��� z != 1
        }

        // ���� ����������
        PRINTR(w);

        // �������� ���������
        puts("Repeat? y/n ");
        ch = getch();
    } while (ch == 'y');
}
