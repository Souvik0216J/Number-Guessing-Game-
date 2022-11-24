#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int num, guess, total_guess = 1;

    srand(time(0));
    num = rand() % 100+1;

    do{
        printf("\nGuess The Number Beween 1 to 100: ");
        scanf("%d", &guess);

        if(num > guess)
        {
            printf("\nBigger Number Please.\n");
        }
        else if(num < guess)
        {
            printf("\nSmaller Numeber Please.\n");
        }
        else{
            printf("\nYou Win. You Guessed It In %d Attempts.\n", total_guess);
        }

        total_guess++;

    }while (guess != num);
    
    return 0;
} 