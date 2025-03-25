#include <stdio.h>
#include "football.h"

int count_combinations(int points) {
    int count = 0;

    for (int td2 = 0; td2 <= points / 8; td2++) {
        for (int td_fg = 0; td_fg <= points / 7; td_fg++) {
            for (int td = 0; td <= points / 6; td++) {
                for (int fg = 0; fg <= points / 3; fg++) {
                    for (int safety = 0; safety <= points / 2; safety++) {
                        int total = td2 * 8 + td_fg * 7 + td * 6 + fg * 3 + safety * 2;
                        if (total == points) {
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}

void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d:\n", points);

    for (int td2 = 0; td2 <= points / 8; td2++) {
        for (int td_fg = 0; td_fg <= points / 7; td_fg++) {
            for (int td = 0; td <= points / 6; td++) {
                for (int fg = 0; fg <= points / 3; fg++) {
                    for (int safety = 0; safety <= points / 2; safety++) {
                        int total = td2 * 8 + td_fg * 7 + td * 6 + fg * 3 + safety * 2;
                        if (total == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td2, td_fg, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}
