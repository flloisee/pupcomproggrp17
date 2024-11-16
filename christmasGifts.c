#include <stdio.h>

int main() {
    int days, gifts[32], gift = 1, totalgifts = 1, giftIndex = 0;
    const int totalDays = 12;

    for (int days = 1; days <= totalDays; days++) {
        printf("Days: %d\nGifts: %d\n", days, gift);
        gift += days + 1;
        gifts[giftIndex] = gift;
        
        printf("Total Gifts: %d\n\n", totalgifts);
        totalgifts += gifts[giftIndex];
        giftIndex++;
    }
}