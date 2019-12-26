#include<stdio.h>
#include<math.h>

int main () {
  int num;
  puts("Enter a number from 1-20: \n");
  scanf("%d", &num);
  if (num < 1) {
    printf("Please enter a number between 1 and 20.\n");
  } else if (num > 20) {
    printf("Please enter a number between 1 and 20.\n");
  } else {
    #define PI 3.14159265358979323846f
    //float pi_val = PI.num;
        printf("The value of pi to %1$ decimal places is %2$.%3$f. \n", num,PI,num);
        //printf("%d",pi_val);
  }
}
