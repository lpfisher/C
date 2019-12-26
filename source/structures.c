#include<stdio.h>

/*define the person structure with name and age parameters*/
typedef struct {
  char * name;
  int age;
} person;

int main() {
  person john;

  /*test code to confirm appropriate parameters*/
  john.name = "John";
  john.age = 27;
  printf("%s is %d years old. \n", john.name, john.age);
}
