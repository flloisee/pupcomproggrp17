#include <stdio.h>
#include <conio.h>

int main() {
    int repIndex = 0; // keeping track of repetition
    printf("CASE STUDY 1: This program shows the factorial of a number from the user input.\n");
    while (1) {
    if (repIndex >= 1) { // Input Invalidation Sequence
        printf("Invalid input. Please try again!\n");
        repIndex = 0;
    }
        int n;
        printf("\nEnter a number: ");
        if (scanf("%d", &n) != 1|| n < 0) { // get the input and check validation at the same time
            repIndex = 1; // trigger the invalidation sequence
            while (getchar() != '\n'); // clear input buffer
            continue; // skip this iteration
        }
        while (getchar() != '\n'); // clea input buffer (doesn't affect non-numeric characters)


            unsigned long long int n2 = 1; // to handle very large positive integers
            printf("\n\nN = %d\n", n);
            printf("N! = ");
            int factorialOverflowCheck = 0;
            int i = 1;
            for (; i <= n; i++) { // increase i until n
                n2 *= i; // n2 = n2 * i, multiply n2 to i (1*1, 1*2, 2*3, 6*4, 24*5, ...)
                if (i == n) { // print all values used (1 x 2 x 3 x ...)
                    printf("%d", i);
                } else {
                    printf("%d x ", i);
                }
            }
            if (n >= 20) { // overflow check (>20!), if the final value exceeds the maximum 64-bit integer
                printf("\n\nFactorial of %d exceeds the 64-bit integer limit!", n);
                factorialOverflowCheck = 1;
            }
            
            if (factorialOverflowCheck != 1) {
                printf("\nN = %llu", n2); // prints the factorial number in unsigned long long int
            }

            char repeat;
            printf("\n\nDo you want to repeat the process? Y or N "); // repeat section
            repeat = getch(); // User enters the char without needing to wait for the enter key
            if (repeat == 'Y' || repeat == 'y') {
                printf("\n\n");
            } else {
                printf("\n\n\nPress any key to exit...");
                getch(); // to exit the program
                break;
            }
    }
    return 0;
}
// Made by Francis Loise M. Llego from Group 17 BSIT 1-1