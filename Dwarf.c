#include <stdio.h>

int main() {
    int number, i, sum, repeat = 1;
    
    while (repeat) {
        printf("Enter a non-negative integer (or -1 to exit): ");
        scanf("%d", &number);
        
        if (number == -1) {
            printf("Exiting program.\n");
            break;
        }
        
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


/* #include <stdio.h>

int main() {
    int num, factorSum, factorsHalf, pandakCheck;

    while (1) {
        printf("Enter a num: ");
        scanf("%d", &num);

        for (int i = 1; i < num; i++) {
            if (num % i == 0) { // get every divisible number of num (its factors)
                printf("%d ", i); 
                factorSum += i;
            }
        }
    
        if (num / 2 < factorSum) {
            printf("Pandak");
        } else {
            printf("Matangkad");
        }

        getchar();
        char repeat;
        printf("\n\nRepeat the process? Y or N ");
        scanf("%c", &repeat);
        if (repeat == 'Y' || repeat == 'y') {
            num = 0;
            factorSum = 0;
            factorsHalf = 0;
        } else {
            break;
        }
    }

    return 0;
} */