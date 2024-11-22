#include <stdio.h>

int main() { // James Isidro
    
    // Declare the variable NUM equal to 2 as the starting point and sum for the total of every third integer before 100.
    int NUM = 2;
    int sum = 0;
    
    // For loop to get the sum of every third integer before 100.
    for (NUM = 2; NUM < 100; NUM = NUM + 3) {
        sum = sum + NUM; 
    }
    
    //Print the result.
        printf("The total sum of every third integer is: %d", sum);
    return 0;
}