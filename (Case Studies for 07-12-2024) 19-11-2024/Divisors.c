#include <stdio.h>

int main() { // James Patrick Isidro
    int N;
    int divisor;
    int sum;
    int decide;
    
    do {
    printf("Input a number: ");
    scanf("%d", &N);
    
    
    for (int i = 1; i < N; i++) {

        if (N % i == 0) {
        printf("%d ", i);
        sum = sum + i;
        }
    
    }
    
     printf("\nSum: %d", sum);
     
     if (sum < N) {
         printf("\n%d < %d DEFICIENT", sum, N);
     }
     
     else if (sum == N) {
         printf("\n%d = %d PERFECT", sum, N);
     }
     
     else if (sum > N) {
         printf("\n%d > %d ABUNDANT", sum, N);
     }
     
     printf("\nDo you want to do it again? Press 1 if yes and 0 if no.");
     scanf("%d", &decide);
    } while (decide == 1);
    
    printf("Program terminated.");
    
     
     
    
    

    return 0;
}

/* #include <stdio.h>

int main() {
    int num, divisorsSum;

    while (1) {
        printf("Enter a num: ");
        scanf("%d", &num);

        printf("List of Proper Divisors: ");
        for (int i = 1; i < num; i++)  {
            if (num % i == 0) {
                printf("%d ", i);
            divisorsSum += i;
            }
        }

        printf("Sum of Proper Divisors: %d", divisorsSum);

        if (divisorsSum < num) {
            printf("\n%d < %d is DEFICIENT", divisorsSum, num);
        } else if (divisorsSum > num) {
            printf("\n%d > %d is ABUNDANT", divisorsSum, num);
        } else if (divisorsSum == num) {
            printf("\n%d == %d is PERFECT", divisorsSum, num);
        }

        getchar();
        char repeat;
        printf("\n\nDo you want to repeat the process? Y or N ");
        scanf("%c", &repeat);
        if (repeat == 'Y' || repeat == 'y') {
            num = 0, divisorsSum = 0;
        } else {
            break;
        }
    }
    

    return 0;
} */