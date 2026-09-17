/*Kysean Dixon Code using while loop playing the Guessing Game*/
#include <stdio.h>
#include <math.h>

int main(void) {
int input = 0;
int target = 17;

printf("Guess the number I'm thinking :");
scanf("%d", &input);

while (input != target) {
    printf("Wrong, try again: ");
        scanf("%d", &input);
    }

    printf("It's done\n");
return 0;
}
