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
    int born;
    int die;
    int population;

    do
    {
        born = initial / 3;
        die = initial / 4;
        population = (initial + born) - die;
        if (initial == end){
            years = 0;
            break;
        }
        years++;
    }
    while (population < end);

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
