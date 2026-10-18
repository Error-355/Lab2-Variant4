#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];      // Название планеты
    char type;          // Один символ: R или G
    int satellites;     // Целое количество спутников
    float radius;       // Радиус в километрах
    double mass;        // Масса в килограммах

    // Задача 1: ввод и вывод сведений о планете
    puts("Task 1. Planet information");
    printf("Planet name (Latin letters): ");
    scanf("%49s", name);

    printf("Type (R - rocky, G - gas): ");
    scanf(" %c", &type);

    printf("Number of satellites: ");
    scanf("%d", &satellites);

    printf("Radius in km: ");
    scanf("%f", &radius);

    printf("Mass in kg: ");
    scanf("%lf", &mass);

    printf("\nPlanet: %s\n", name);
    printf("Type: %c\n", type);
    printf("Satellites: %d\n", satellites);
    printf("Radius: %.2f km\n", radius);
    printf("Mass: %e kg\n", mass);

    return 0;
}
