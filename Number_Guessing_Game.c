#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //genrate random number between 1 and 100
    // printf("THE NUMBER IS %d\n", number);
    //keep runningthe loop untill the number is guesed

    do
    {
        printf("GUESS THE NUMBER BETWEEN 1 AND 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("LOWER NUMBER PLEASE\n");
        }
        else if (guess < number)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else
        {
            printf("YOU GUESS THE NUMBER IN %d ATTEMPTS\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}