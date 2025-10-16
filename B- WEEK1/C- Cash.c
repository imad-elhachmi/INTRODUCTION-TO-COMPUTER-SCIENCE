#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int cent;
    do
    {
    cent = get_int("enter cent :");
    }
    while (cent < 0);
  int quarters = cent / 25;
    cent %= 25;

    int dimes = cent / 10;
    cent %= 10;

    int nickels = cent / 5;
    cent %= 5;

    int pennies = cent;

    int coins = quarters + dimes + nickels + pennies;

    printf("%d\n", coins);
}
