#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt a user to change owe in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters should give to customer.
    // Int ignore the decimal part

    int quarters = cents / 25;

    // Subtract the value of quarters from cents
    cents = cents - (quarters * 25);

    // Calculate dimes
    int dimes = cents / 10;

    // Subtract
    cents = cents - (dimes * 10);

    // Calculate nickels
    int nickels = cents / 5;

    // Subtract
    cents = cents - (nickels * 5);

    // Calculate pennies
    int pennies = cents; // Rest cents are pennies

    // Sum the number of quarters, dimes, nickels, and pennies used.
    int coins = quarters + dimes + nickels + pennies;

    printf("quarters: %i, dimes: %i, nickels: %i, pennies: %i, total: %i\n", quarters, dimes,
    nickels, pennies, coins);
}
