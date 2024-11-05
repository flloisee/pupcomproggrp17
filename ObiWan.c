#include <stdio.h>
#include <string.h>

int main() {
    // declare
    float height;
    int age, recommendee, citizen;
    char planet[32];

    // Obi Wan recommendee first
    printf("Are you a recommendee of Obi Wan Kenobi? Please enter 1 if YES, and 0 if NO\n");
    scanf("%d", &recommendee);

    if (recommendee != 1) { // if not a recommendee, continue
        printf("Enter your height in cm: ");
        scanf("%f", &height); // get the height
        
        if (height >= 200) { // if >200, continue, else rejected
                printf("Enter your age: ");
                scanf("%d", &age); // get age

            if (age >= 21 && age <= 25) { // if inside the range, continue. Else, rejected.
                printf("Are you a citizen? Press 1 if YES, and press 0 if NO: ");
                scanf("%d", &citizen);
                getchar();

                if (citizen == 1) {
                    printf("Which planet are you from? ");
                    fgets(planet, sizeof(planet), stdin);
                    planet[strcspn(planet, "\n")] = '\0';

                    if (strcmp(planet, "Endor") == 0) {
                        printf("Application Accepted!");
                    } else {
                        printf("Application Rejected");
                    }
                } else {
                    printf("Application Rejected.");
                }
            } else { // if not inside age range
                printf("Application Rejected.");
            }
        } else { // if not tall enough
            printf("Application Rejected.");
        }
    } else { // if recommendee if Obi Wan 
        printf("Application Accepted!");
    }
    



    return 0;
}