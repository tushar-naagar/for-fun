#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;
    int i=0;

    do
    {
        printf("guesses the number");
        scanf("%d", &guessed);
        ++i;
        if (guessed > randomNumber)
        {
            printf("%d lower number please\n", i);
        }
        else if (randomNumber > guessed)
        {
            printf("%d higher number please\n", i);
        }
        else
        {
            printf("%d congrats!!\n", i);
        }
        no_of_guesses++;
    } while (guessed != randomNumber);

    // Print the random number
    printf("Random Number: %d\n", randomNumber);

    return 0;}