#include <stdio.h> // standard input output
#include "football.h" // include score function declarations

int main(int argc, char *argv[]) {
    int score; // store user input

    while (1) { // infinite loop for input
        printf("\nEnter the NFL score (Enter 0 or 1 to STOP): "); // prompt user
        if (scanf("%d", &score) != 1) { // check input is number
            printf("Invalid input Please enter a number\n"); // error message
            while (getchar() != '\n'); // clear buffer
            continue; // restart loop
        }

        if (score <= 1) { // check for exit
            printf("Program terminated\n"); // exit message
            break; // end loop
        }

        printf("Total combinations: %d\n", count_combinations(score)); // show count
        print_combinations(score); // show details
    }

    return 0; // end program
}
