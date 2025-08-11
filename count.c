/*
 * Compile with:
 *   gcc -Wall -Werror -std=c11 count.c -o count
 * Run with:
 *   ./count
 * (Press Enter after each number.)
 */
#include <stdio.h>

int main(void) {
    int number = 0;
    char dummy;

    while (number <= 10) {
        switch (number) {
            case 0: printf("0\n"); break;
            case 1: printf("1\n"); break;
            case 2: printf("2\n"); break;
            case 3: printf("3\n"); break;
            case 4: printf("4\n"); break;
            case 5: printf("5\n"); break;
            case 6: printf("6\n"); break;
            case 7: printf("7\n"); break;
            case 8: printf("8\n"); break;
            case 9: printf("9\n"); break;
            case 10: printf("10\n"); break;
        }

        while ((dummy = getchar()) != '\n' && dummy != EOF) {
            ;
        }

        number++;
    }
    return 0;
}
