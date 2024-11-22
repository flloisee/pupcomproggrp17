#include <stdio.h>

int factorial(int n) {
    int n2 = 1, finalN;
    for (int i = 1; i <= n; i++) {
        n2 *= i;
        if (i == n) {
            printf("%d", i);
        } else {
            printf("%d x ", i);
        }
    }
    finalN = n2;
    return finalN;
}

int main() {
    int number;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Invalid Input!");
        } else {
                printf("\n\n%d\'s factorial: %d", number, factorial(number));
        }

        getchar();
        char repeat;
        printf("\n\nDo you want to repeat the process? Y or N ");
        scanf("%c", &repeat);
        if (repeat == 'Y' || repeat == 'y') {
            number = 0;
        } else {
            break;
        }
    }
    
    return 0;
}