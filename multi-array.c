/* EXERCISE REQUIREMENTS
* Declare grades as a 2d array of integers
*Complete the for loop by specifying termination conditions
*Compute the average grades in each subject*/
#include <stdio.h>

int main() {
  int grades[2][5];
  float average;
  int i;
  int j;

  grades[0][0] = 80;
  grades[0][1] = 70;
  grades[0][2] = 65;
  grades[0][3] = 89;
  grades[0][4] = 90;

  grades[1][0] = 85;
  grades[1][1] = 80;
  grades[1][2] = 80;
  grades[1][3] = 82;
  grades[1][4] = 87;

/* Loops through the first array, then the second, iterating through both to sum the values */
  for (i = 0; i < 2; i++) {
    average = 0;
    for (j = 0; j < 5; j++) {
      average += grades[i][j];
    }

    average /= 5;
    printf("The average grades obtained in subject %d is: %.2f\n", i, average);
  }
  return 0;
}
