#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* This program prompts the user to input (in minutes) how
    long they take a shower for and it computes the equivalent
    amount of water in terms of 16 oz bottes of water */
    
    // collect input from the user
    printf("minutes: ");
    int showerlength = GetInt();

    // computations
    int qtybottles = showerlength * 192 / 16;
    
    // display results
    printf("bottles: %i\n", qtybottles);
    
    return 0;
}