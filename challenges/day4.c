// Type Casting Challnege: Unce upon a time, Potion Potency //
#include <stdio.h>

int main() {
    double potency;

    printf("Enter Potion Potency: ");
    fflush(stdout);
    scanf("%lf", &potency);

    // Conversions
    int whole_doses = (int)potency;
    float leftover_strength = (int) potency;

    // output of potions
    printf("Original Potency: %f\n", potency);
    printf("The whole doses: %d\n", whole_doses);
    printf("Leftover strength: %.2f\n", leftover_strength);
    return 0;
}
// This code is a simple C program that takes a double input representing potion potency,

   