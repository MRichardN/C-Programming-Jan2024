//Program to print to calculate simple interest SI = p*r/100*t
#include <stdio.h>

int main () {
int principle, rate, time;
float interest;

printf("Enter the principle amount: \n");
scanf("%d", &principle);

printf("Enter the time:\n ");
scanf("%d", &time);

printf("Enter the rate:\n ");
scanf("%d", &rate);

//printf("Enter the principle amount, time and rate: ");
//scanf("%d %d %d", &principle, &time, &rate);

interest = principle * rate/100 * time;

printf("The interest is Ksh %.2f ", interest);


return 0;
}
