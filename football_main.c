#include <stdio.h>
#include "football.h"

int main(int argc, char *argv[]) {
    int score;

    while (1) {
        printf("\nEnter the NFL score (Enter 0 or 1 to STOP): ");
        if (scanf("%d", &score) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');  // Clear input buffer
            continue;
        }

        if (score <= 1) {
            printf("Program terminated.\n");
            break;
        }

        printf("Total combinations: %d\n", count_combinations(score));
        print_combinations(score);
    }

    return 0;
}
