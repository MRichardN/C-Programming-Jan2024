#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simple_interest;

    // Prompt user for input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Display the result
    printf("\nSimple Interest: %.2f\n", simple_interest);

    return 0;
}
