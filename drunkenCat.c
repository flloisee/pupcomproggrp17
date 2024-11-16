#include <stdio.h>

int main() {
    int drunkCat, i, hourTrack = 1, catLickIndex = 0, leakRate = 162;
    const int catLick = 28, wineBucket = 2452 ;
    float hour;

    for (i = 0; leakRate < wineBucket; i++) {
        // printf("%d. Leak: %d\n", hourTrack, leakRate); // for logging leak rate
        hourTrack++;
        i++;
        leakRate += 162;
        if (i % 3 == 0) {
            // printf("%d. Cat licked 28 drops\n", catLickIndex + 1); // for logging cat lick rate
            leakRate -= catLick;
            drunkCat += catLick;
            catLickIndex++;
        }
    }

    // printf("\n");
    printf("Duration of the bucket filling with wine in hours: %d\n", hourTrack);
    printf("Total drops licked by the cat: %d\n", drunkCat);
    printf("Amount of times the cat licked the drop: %d\n", catLickIndex);

    return 0;
}