#include <stdio.h>

int main() {
    int number, i, sum, repeat = 1;
    
    printf("CASE STUDY 3: A program that determines the factors of a positive number, the  sum of the factors, and if it is Dwarf or Not Dwarf.\n\n");
    
    while (repeat) {
        printf("Enter a non-negative integer ");
        scanf("%d", &number);
        
        if (number < 0) {
            printf("Please enter a non-negative integer!\n");
            continue;
        }
       
        printf("Factors are: ");
        sum = 0;
        for (i = 1; i <= number / 2; i++) {
            if (number % i == 0) {
                printf("%d ", i);
                sum += i;
            }
        }
        
        printf("\nSum of its factors: %d\n", sum);
        printf("Half of the number: %.2f\n", number / 2.0);
        
 
        if (sum > number / 2.0) {
            printf("%d is DWARF\n", number);
        } else {
            printf("%d is NOT DWARF\n", number);
        }
        
      
        printf("\nDo you want to enter another number? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);
    }
    
    return 0;
}