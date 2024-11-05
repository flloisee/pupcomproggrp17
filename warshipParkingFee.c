#include <stdio.h>

void vehicle() {
    char selector;
    printf("Select a vehicle parked: C for Car, B for Bus, and T for Truck: ");
    scanf("%c", &selector); // get the vehicle type

    float car;
    float bus;
    float truck;
    float hour;
    printf("Enter the parking duration in hours: ");
    scanf("%f", &hour); // get the hours

    // calculate
    car = hour * 25.00;
    bus = hour * 50.00;
    truck = hour * 75.00;

    switch (selector) { // identify if C or c, etc
        case 'C':
        case 'c':
            printf("Your car\'s parking fee: %.2f", car);
            break;
        case 'B':
        case 'b':
            printf("Your bus\' parking fee: %.2f", bus);
            break;
        case 'T':
        case 't':
            printf("Your truck\'s parking fee: %.2f", truck);
            break;
        default: 
            printf("\nInvalid Input."); // if not included from the choices
    }
}

void warship() {
    char type;
	
	printf("Please input the Class Id of your war ship below :\n");
	scanf("%c", &type); // get the warship class
	 
	 switch(type){ // identify which warship class
	 	case 'B':
	 	case 'b':
	 	printf("Battleship");
	 	break;
	 	
	     case 'C':
	     case 'c':
	     printf("Cruiser");
	     break;
	     
	     case 'D':
	     case 'd':
	     printf("Destroyer");
	     break;
	     
	     case 'F':
	     case 'f':
	     printf("Trigate");
	     break;
	     
	     default :
	     printf("Not a War Ship"); // if not included in the choices
	     break;
	 }
}

int main() {
    int selector;
    printf("Type 1 for Parking Fee, and type 2 for War Ship: ");
    scanf("%d", &selector);
    getchar();

    switch (selector) {
        case 1: 
            vehicle();
            break;
        case 2: 
            warship();
            break;
        default:
            printf("Invalid Input.");
    }

    return 0;
}