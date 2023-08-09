#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial, end;

    do
    {
        // TODO: Prompt for start size
        printf("Enter the initial size: ");
        scanf("%d",&initial);

        // TODO: Prompt for end size
        printf("Enter the end size: ");
        scanf("%d",&end);
    }
    while (initial < 9 || end < 9);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int born = initial / 3;
    int die = initial / 4;
    int population;

    do
    {
        population = (initial + born) - die;
        years++;
    }
    while (population <= end);

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
