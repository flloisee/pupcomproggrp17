#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int repIndex = 0; // keeping track of repetition
    while (1) {
    if (repIndex >= 1) { // if invalid input got triggered, this message will be printed first
        printf("Invalid input. Please try again!\n");
        repIndex = 0;
    }
    printf("CASE STUDY 1: This program shows the factorial of a number from the user input.\n\n");
        int n;        
        printf("Enter a number: ");
        // checking if the user input was a letter or number (1 = num, 0 = letter)
        if (scanf("%d", &n) != 1 || n < 0) {
            repIndex++; // set to 1 when invalid input
            system("cls"); // clear the console
            while (getchar() != '\n'); // clear input buffer to avoid infinite loops
            continue; // skip this iteration and move to the next, asking for user input again
        }
        
            unsigned long long int n2 = 1; // to handle very large positive integers
            printf("\n\nN = %d\n", n);
            printf("N! = ");
            for (int i = 1; i <= n; i++) { // increase i until n
                n2 *= i; // n2 = n2 * i, multiply n2 to i (1*1, 1*2, 2*3, 6*4, 24*5, ...)
                if (i == n) { // print all values used (1 x 2 x 3 x ...)
                    printf("%d", i);
                } else {
                    printf("%d x ", i);
                }
            }
            
            printf("\nN = %llu", n2); // prints the factorial number in unsigned long long int

            getchar(); // prevents the first scanf mixing with the second one
            char repeat;
            printf("\n\nDo you want to repeat the process? Y or N "); // repeat section
            scanf("%c", &repeat);
            if (repeat == 'Y' || repeat == 'y') {
                system("cls");
            } else {
                printf("\n\n\nPress any key to continue...");
                getch(); // to exit the program
                break;
            }
    }
    
    return 0;
}

// Made by Francis Llego from Group 17 BSIT 1-1