#include<stdio.h>

int main(){
/* Define local variable a */
int a = 1;

/*define a pointer variable and pointit to 'a' using the & operator */
int *point_to_a = &a;

/*return both values */
printf("The value of a is %d\n.", a);
printf("The value of a is also %d\n\n.", *point_to_a);

/* change value of a */
a += 1;

/* Change value of a again */
*pointer_to_a += 1;

/*return both values */
printf("The value of a is now %d\n\n.", *point_to_a);
}
