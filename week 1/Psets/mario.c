#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask the user for the input
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // generate the pyramid
    for (int i = 0; i < n; i++)
    {
        for (int g = 7; g > i; g--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
