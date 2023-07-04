#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() { 
    int t1, t2, t3;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

//Створення змінної time типу double
    double time;
    printf("Скільки часу потрібно 1, 2 і 3 особі: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    
//Ділення години на годину яка ділиться на введене число і додається до 2 і 3
    time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    printf("%.2lf", time);
    return 0;
}