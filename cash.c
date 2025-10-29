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

    int quarters = cents / 25;

    // Subtract the value of quarters from cents
    int remaining_after_quarter = cents - (quarters * 25);

    // Calculate how many dimes should give to customer.
    int dimes = remaining_after_quarter / 10;

    // Subtract the value of dimes from remaining cents
    int remaining_after_dimes = remaining_after_quarter - (dimes * 10);

    // Calculate how many nickels should give to customer.
    int nickels = remaining_after_dimes / 5;

    // Subtract the value of nickels from remaining cents
    int remaining_after_nickels = remaining_after_dimes - (nickels * 5);

    // Calculate how many pennies should give to customer.
    int pennies = remaining_after_nickels / 1;

    // Subtract the value of pennies from remaining cents
    int remaining_after_pennies = remaining_after_nickels - (pennies * 1);

    // Sum the number of quarters, dimes, nickels, and pennies used.
    int total_coins = quarters + dimes + nickels + pennies;
    // Print the sum
    // printf("quarters: %i, dimes: %i, nickels: %i, pennies: %i, total: %i\n", quarters, dimes,
    // nickels, pennies, total_coins);
    printf("total: %i\n", total_coins);
}
