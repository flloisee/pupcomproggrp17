#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int repIndex = 0; // keeping track of repetition
    while (1) {
    if (repIndex >= 1) { // Input Invalidation Sequence
        printf("Invalid input. Please try again!\n");
        repIndex = 0;
    }
    printf("CASE STUDY 1: This program shows the factorial of a number from the user input.\n\n");
        int n;
        char inputBuff[255]; // input buffer
        char* end = NULL; // pointer for strtol, nothing is stored yet
        printf("Enter a number: ");
        fgets(inputBuff, sizeof(inputBuff), stdin); // store the input to the inputBuffer
        n = strtol(inputBuff, &end, 10); // find any characters from the inputBuff (non-numeric characters), store them to &end, and store integers to n
        if (end == inputBuff || *end != '\n' || n < 0) { // if integer wasn't the first thing read or characters after integer or decimal value of n is negative, run input invalidation sequence
            repIndex++; // trigger the invalidation sequence
            system("cls"); // clear the console screen
            continue; // skip this iteration
        } // if input is valid, proceed with the factorial calculation and output
        
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

            char repeat;
            printf("\n\nDo you want to repeat the process? Y or N "); // repeat section
            scanf("%c", &repeat);
            if (repeat == 'Y' || repeat == 'y') {
                system("cls");
                getchar();
            } else {
                printf("\n\n\nPress any key to continue...");
                getch(); // to exit the program
                break;
            }
    }
    
    return 0;
}

// Made by Francis Llego from Group 17 BSIT 1-1