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
    }
    while (initial < 9);

    do
    {
        // TODO: Prompt for end size
        printf("Enter the end size: ");
        scanf("%d",&end);
    }
    while (end < initial);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    while (initial < end)
    {
        initial = initial + (initial/3) - initial/4;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
