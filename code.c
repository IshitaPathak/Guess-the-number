#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number between 1 to 100
                               //  printf("the number is %d \n ", number);
    // keep running the loop untill number is gussed

    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number){
            printf("lower number please\n");
        }
        else if (guess < number)
{            printf("higher number please\n");}
        else{
            printf("your guess is correcet and you goussed in %d attempts\n", nguess);
                }        nguess++;
    } while (number != guess);
    return 0;
}
