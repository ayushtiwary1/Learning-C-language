#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 101;

    // printf("Random number (0 to 100): %d\n", randomNumber);
    int guess;
    int attempts = 0;
    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a number between 0 and 100. Can you guess it?\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly!\n", randomNumber);
        }

    } while (guess != randomNumber);
    //number of attempts in guessing the number
    printf("You took %d attempts to guess the number.\n", attempts);

    return 0;
}