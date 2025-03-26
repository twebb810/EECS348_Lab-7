#include <stdio.h> // standard input output
#include "football.h" // include function declarations

int count_combinations(int points) {
    int count = 0; // initialize counter

    for (int td2 = 0; td2 <= points / 8; td2++) { // loop over 8 point scores
        for (int td_fg = 0; td_fg <= points / 7; td_fg++) { // loop over 7 point scores
            for (int td = 0; td <= points / 6; td++) { // loop over 6 point scores
                for (int fg = 0; fg <= points / 3; fg++) { // loop over field goals
                    for (int safety = 0; safety <= points / 2; safety++) { // loop over safeties
                        int total = td2 * 8 + td_fg * 7 + td * 6 + fg * 3 + safety * 2; // total score from current combo
                        if (total == points) { // check if combo is valid
                            count++; // increment counter
                        }
                    }
                }
            }
        }
    }

    return count; // return total number of combos
}

void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d\n", points); // display intro

    for (int td2 = 0; td2 <= points / 8; td2++) { // loop over 8 point scores
        for (int td_fg = 0; td_fg <= points / 7; td_fg++) { // loop over 7 point scores
            for (int td = 0; td <= points / 6; td++) { // loop over 6 point scores
                for (int fg = 0; fg <= points / 3; fg++) { // loop over field goals
                    for (int safety = 0; safety <= points / 2; safety++) { // loop over safeties
                        int total = td2 * 8 + td_fg * 7 + td * 6 + fg * 3 + safety * 2; // total from combo
                        if (total == points) { // check if valid
                            printf("%d TD + 2pt %d TD + FG %d TD %d 3pt FG %d Safety\n",
                                   td2, td_fg, td, fg, safety); // print combination
                        }
                    }
                }
            }
        }
    }
}
