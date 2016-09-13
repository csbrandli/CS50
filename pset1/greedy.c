#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main( void )
{
    /* Code is intended break down how much US currency is owed
    into the least amount of coins possible */
    

    // Getting quantity of change owed from user
    float UserInput;
    do
    {
        printf("How much change is owed? $");
        UserInput = GetFloat();
    } while (UserInput <= 0);
    int ChangeOwed = round( UserInput * 100 );

    // Defining Coin Variables
    int numQuarters = 0;
    int numDimes = 0;
    int numNickles = 0;
    int numPennies = 0;
    
    // Calculating how much of each coin type
    if ( ChangeOwed / 25 >= 1)
    {
        numQuarters = ChangeOwed / 25;
        ChangeOwed = ChangeOwed - numQuarters * 25;
    }
    if ( ChangeOwed / 10 >= 1)
    {
        numDimes = ChangeOwed / 10;
        ChangeOwed = ChangeOwed - numDimes * 10;
    }
    if ( ChangeOwed / 5 >= 1)
    {
        numNickles = ChangeOwed / 5;
        ChangeOwed = ChangeOwed - numNickles * 5;
    }
    if ( ChangeOwed / 1 >= 1 )
    {
        numPennies = ChangeOwed / 1;
        ChangeOwed = ChangeOwed - numPennies * 1;
    }
    
    // Outputting Result
    printf("%i\n", numQuarters + numDimes + numNickles + numPennies);

    
}