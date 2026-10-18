#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number;         // Число для второй задачи

    // Задача 2: одно число в трех формах
    puts("\nTask 2. Number formats");
    printf("\nEnter an integer: ");
    scanf("%d", &number);

    printf("Character: %c\n", number);
    printf("Integer: %d\n", number);
    printf("Exponential: %e\n", (double)number);

    return 0;
}
