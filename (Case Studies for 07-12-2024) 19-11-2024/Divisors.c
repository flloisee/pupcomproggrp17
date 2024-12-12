#include <stdio.h>


int main() {
    
    //Declaration of variables used in the program.
    int N;
    int divisor;
    int sum;
    int decide;
   
    printf("CASE STUDY 2: A program that determines the proper divisors of a number, the sum of it, and if it is deficient, perfect, or abundant.");
    //Loop used to ask the user if they want to try the program again.


    do {
    N = 0, divisor = 0, sum = 0; //Resetting the value of the variables.
    printf("\nInput a positive number: ");
    //Checks if the value inputted by the user is a positive and valid value.
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid Input! Please enter a positive number only. ");
        break;
    }
   
    printf("Proper divisors are: ");
    //Loop that determines the proper divisors.
    for (int i = 1; i < N; i++) {


        if (N % i == 0) {
        printf("%d ", i);
        sum = sum + i;
        }
   
    }
     printf("\nSum of proper divisors: %d", sum);
     //Checking the value of sum relative to the value of the number inputted.
     if (sum < N) {
         printf("\n%d < %d is DEFICIENT", sum, N);
     }
     
     else if (sum == N) {
         printf("\n%d = %d is PERFECT", sum, N);
     }
     
     else if (sum > N) {
         printf("\n%d > %d is ABUNDANT", sum, N);
     }
     
     //Asks the user if they want to try again.
     printf("\nDo you want to do it again? Press 1 (yes) or 0 (no): ");
     scanf("%d", &decide);
     
     //Activates when the user inputted values other than 1 and 0.
     if (decide != 1 && decide != 0) {
         printf("Please enter 1 and 0 only. Do you want to try again? 1 (yes) or 0 (no): ");
         scanf("%d", &decide);
     }
     
    } while (decide == 1);
   
    //Message that indicates program termination.
    printf("Program terminated.");
   
    return 0;
}


// Programmed and Designed by James Patrick M. Isidro from Group 17 BSIT 1-1