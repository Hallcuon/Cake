#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() { 
    int t1, t2, t3;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

//��������� ����� time ���� double
    double time;
    printf("������ ���� ������� 1, 2 � 3 ����: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    
//ĳ����� ������ �� ������ ��� ������� �� ������� ����� � �������� �� 2 � 3
    time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    printf("%.2lf", time);
    return 0;
}