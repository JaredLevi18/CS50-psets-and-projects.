#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int initial;
    int end;

    do
   {
        // TODO: Prompt for start size
        printf("Enter the initial size: ");
        scanf("%d",&initial);

        // TODO: Prompt for end size
        printf("Enter the end size: ");
        scanf("%d",&end);
    }
    while (initial < 9 && end < 9);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
