#include<stdio.h>

/*Define the 'person' data structure*/
typedef struct {
  char * name;
  int age;
} person;

/*function to increment a persons age by 1 year on their birthday */
void birthday(person * p) {
  p->age++;
};

/*Main function prints the persons age, passes birthday(), then prints their new age */
int main() {
  person john;
  john.name = "Jame";
  john.age = 27;

  printf("%s is %d years old. \n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old. \n", john.name, joh.age);

  return 0;
}
