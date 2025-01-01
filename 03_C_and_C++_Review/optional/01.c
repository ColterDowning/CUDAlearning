#include <stdio.h>
#include <stdlib.h>

struct Person {
  int age;
  char* name;
};


int main() {
  struct Person person1;
  person1.age = 27;
  person1.name = "colter";

  printf("age: %d\tname: %s\n", person1.age, person1.name);

  struct Person* person2 = malloc(sizeof(struct Person));
  person2->age = 23;
  person2->name = "not colter";

  printf("age: %d\tname: %s\n", person2->age, person2->name);
  free(person2);
  return 0;
}

// C is not an object oriented language, but we can kinda mimic it with structs. Creating a Person struct is similar to a class in C++ or Python.
// This is still missing a lot of native object features like inheritance, polymorphism, encapsulation, method overloading, etc
