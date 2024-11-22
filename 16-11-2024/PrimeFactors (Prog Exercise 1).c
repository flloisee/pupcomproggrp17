#include <stdio.h>

void primeFactors(int num) { // Maenard Lagahit
    if (num == 0) {
        printf("No prime factors for 0.\n");
        return;
    }

    // If the number is 1, just print 1 as it's not a prime number, but it's included as a factor
    if (num == 1) {
        printf("Prime factors are: 1\n");
        return;
    }

    // Print the number of 2s that divide n
    if (num % 2 == 0) {
        printf("Prime factors are: 1 ");
        while (num % 2 == 0) {
            printf("2 ");
            num /= 2;
        }
    }

    // n must be odd at this point, so a skip of 2 is used
    for (int i = 3; i * i <= num; i += 2) {
        // While i divides n, print i and divide n
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    // If n is still a prime number greater than 2
    if (num > 2) {
        printf("%d", num);
    }

    printf("\n");
}

int main() {
    int num;
    char repeat;

    do {
        // Prompt for input
        printf("Enter a non-negative number: ");
        scanf("%d", &num);

        // Check if the number is non-negative
        if (num < 0) {
            printf("Please enter a non-negative integer.\n");
            continue;
        }

        // Find and display prime factors
        primeFactors(num);

        // Ask if the user wants to repeat
        printf("Do you want to enter another number? yes/no (0/1): ");
        scanf(" %c", &repeat);  
        } while (repeat == '0' || repeat == 'O');

    printf("Program terminated.\n");

    return 0;
}