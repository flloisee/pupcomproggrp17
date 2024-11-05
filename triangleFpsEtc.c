#include <stdio.h>
#include <string.h>
#include <math.h>

void triangle() {
    //Define the area, base, height, and the half
    float area, base, height, half = 0.5;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // calculate the area based from the given formula area = 1/2 * base * height
    area = half * base * height;
    printf("The area of the triangle is: %.2f", area); 
}

void measurementConv() {
     //Define the variables.
    float feet, inches, centimeter, meter;
    printf("Enter feet: ");
    scanf("%f", &feet);
    
    //Computation for the conversion from feet to inches, centimeter, and meter.
    inches = feet * 12;
    centimeter = feet * 12 * 2.54;
    meter = feet * 12 * 2.54 / 100;
    
    //Displaying the results.
    printf("\nInches: %.2fin", inches);
    printf("\nCentimeter: %.2fcm", centimeter);
    printf("\nMeter: %.2fm", meter);
}

void fps() {
    // declare all variables
    float minute, second, secondsFromMin, feet = 5280.0, finalFeet, finalMeters, meters = 0.3048, feetToMeters;
    printf("Enter the time in this format: (minute:second)\n");
    scanf("%f:%f", &minute, &second);

    // Convert minute to second
    secondsFromMin = minute * 60;
    // add that converted value into the remaining seconds
    second += secondsFromMin;
    
    // Get the v3alue of feet to meters
    feetToMeters = feet * meters;
    // Divide feet by second
    finalFeet = feet / second;
    // Divide the converted feet into meters, by seconds
    finalMeters = feetToMeters / second;
    
    printf("\n%.2f feet per second\n", finalFeet);
    printf("%.2f meters per seconds", finalMeters);
}

int main() {
    // define selection, and get it
    int selection;
    printf("Select one:\n1. Triangle's Area\n2. Measurement Conversion\n3. Feet Per Second\n\n");
    printf("Select: ");
    scanf("%d", &selection);


    // get what value, and choose from there. If invalid, return to default.
    switch (selection) {
        case 1: 
            printf("You have selected: Triangle's Area\n\n");
            triangle();
            break;
        case 2: 
            printf("You have selected: Measurement Conversion\n\n");
            measurementConv();
            break;
        case 3: 
            printf("You have selected: Feet Per Second\n\n");
            fps();
            break;
        default:
            printf("Invalid Input.");
    }
}