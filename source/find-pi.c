#include<stdio.h>

int main () {
  int num;
  puts("Enter a number from 1-20: \n");
  scanf("%d", &num);
  if (num < 1) {
    printf("Please enter a number between 1 and 20.\n");
  } else if (num > 20) {
    printf("Please enter a number between 1 and 20.\n");
  } else {
    float pi = 3.14159265358979323846f;
        printf("The value of pie to %d decimal places is %.*f. \n", num,pi);
  }
}
