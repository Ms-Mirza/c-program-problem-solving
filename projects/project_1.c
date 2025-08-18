//  Number Guessing Game 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int random, guess, no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the Number Guessing game");
    random = rand() % 100 + 1;

    do{
        printf("\nEnter your guess between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++; 

        if (guess > random){ 
            printf("\nGuess a smaller number.\n");
        }
        else if(guess < random){
            printf("\nGuess a larger number.\n");
        }
        else{
            printf("\nCongratulations!! You successfully guess the number in %d attempts\n", no_of_guess);
        }
            
    }while(guess != random);

    printf("\nThanks for playing.\nGenerate by: Mirz@");
    return 0;
}