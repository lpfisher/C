#include <stdio.h>

int n = 0;
main() {
  while (n < 10) {
    n++;
	/* Check that n is odd */
    if (n % 2 == 1) {
	continue;
    }
	/* This is only run if n is even */
    printf("The number %d is even.\n", n);
  }
}
