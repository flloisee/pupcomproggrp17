#include <stdio.h>

int main() { // by Llego, Francis
    int letterCode;
    float letterWeight, cost;
    while (1) {
        printf("Enter the weight of the letter in grams: ");
        scanf("%f", &letterWeight);
        printf("\nLetter code 1 is ordinary, while letter code 2 is special.\n\nEnter the letter's code: ");
        scanf("%d", &letterCode);

        if (letterCode > 2 || letterCode < 1) {
            printf("Invalid Input!");
        } else {
            if (letterCode == 2) { // SE
                if (letterWeight <= 1) {
                    printf("Cost: P40.00");
                } else if (letterWeight > 1) {
                    cost = 40 + (25 * (letterWeight - 1));
                    printf("Cost: P%.2f", cost);
                }
            } else if (letterCode == 1) { // STD
                if (letterWeight <= 1) {
                    printf("Cost: P20.00");
                } else if (letterWeight > 1) {
                    cost = 20 + (15 * (letterWeight - 1));
                    printf("Cost: P%.2f", cost);
                }
            }
        }

        getchar();
        char repeat;
        printf("\n\nAgain? Y or N ");
        scanf("%c", &repeat);
        if (repeat == 'Y' || repeat == 'y') {

        } else {
            printf("See you soon!");
            break;
        }
    }

    return 0;
}