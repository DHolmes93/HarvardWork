#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // TODO: Prompt for start size

    {
         n = get_int("Positive Integer: ");

    }
        while (n < 9);

    // TODO: Prompt for end size
    int end;

    do
    {
        end = get_int("End Size: ");

    }
    while (end < n);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    // TODO: Print number of years
    while (n < end)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
     printf("Years: %i\n", years);
}
