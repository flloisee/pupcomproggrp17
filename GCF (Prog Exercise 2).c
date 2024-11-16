#include <stdio.h>

int main() {
    int num1, num2, GCF;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Factors of %d: ", num1);
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) { // get every divisible number of num1 (its factors)
            printf("%d ", i);
        }
    }
    printf("\n\n");
    printf("Factors of %d: ", num2);
    for (int i = 1; i <= num2; i++) { // same procedure here
        if (num2 % i == 0) {
            printf("%d ", i);
        }
    }

    //GCF
    for (int i = 1; i <= num1 && i <= num2; i++) { 
        if (num1 % i == 0 && num2 % i == 0) { // whatever value i lands on when both numbers are divisible
            GCF = i; 
        }
    }

    printf("\n\n");
    printf("The GCf of %d and %d is %d.", num1, num2, GCF); // only prints out whatever was last stored, meaning the GCF.

    return 0;
}