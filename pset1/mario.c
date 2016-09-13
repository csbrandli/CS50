#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* This program recreates a half-pyramid using hashes (#) 
    for blocks just like the Mario pyramid. The user must input
    a positive integer less than or equal to 23. */
    
    // Getting an integer from the user
    int h;
    do
    {
        printf("height: ");
        h = GetInt();
    } 
    while ( h < 0 || h > 23 );

    // Generating the pyramid
    for (int row = 1; row <= h; row++)
    {
        for (int i = 1; i <= (h-row); i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= (row+1); i++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}