#include <stdio.h>
int main() {
//Declaring variable
            int number, i, sum, repeat = 1;
//Input a non-negative integer    
    printf("CASE STUDY 3: A program that determines the factors of a positive number, the  sum of the factors, and if it is Dwarf or Not Dwarf.\n\n");
    while (repeat) {
        printf("Enter a non-negative integer (or -1 to exit): ");
        scanf("%d", &number);

//To terminate the program 
        if (number == -1) {
            printf("Exiting program.\n");
            break;
        }

        //Checking if  the integer is valid or not       
        if (number < 0) {
            printf("Please enter a non-negative integer!\n");
            continue;
        }

       //Calculating the factors of the given integer
        printf("Factors are: ");
        sum = 0;
        for (i = 1; i <= number / 2; i++) {
            if (number % i == 0) {
                printf("%d ", i);
//Adding the factors
                sum += i;
            }
        }
        
        printf("\nSum of its factors: %d\n", sum);
        printf("Half of the number: %.2f\n", number / 2.0);
        
 //Checking the number if it's dwarf or not
        if (sum > number / 2.0) {
            printf("%d is DWARF\n", number);
        } else {
            printf("%d is NOT DWARF\n", number);
        }
        
    //To activate the loop
        printf("\nDo you want to enter another number? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);
    }
    
    return 0;
}

// Made by Maenard Rafael B. Lagahit