#include <stdio.h>

void guessNumber(int guess) {
  if (guess = 555) {
    printf("Correct. You guessed it!");
    return 0;
  } else if (guess < 555) {
    printf("Your guess is too low.");
  } else {
    printf("Your guess is too high.");
  }
}

int main() {
  guessNumber(500);
  guessNumber(600);
  guessNumber(555);
}
