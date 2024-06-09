#include <cstdio>
#include <cstring>

struct Student {
  int age;
  char name[30];
};

void student_init(struct Student *person, int age, const char *name) {
  person->age = age;
  strcpy(person->name, name);
}

void student_print(struct Student *person) {
  printf("Hi! I'm %s of %d years old!\n", person->name, person->age);
}

int main() {

  struct Student a, b;
  student_init(&a, 18, "John");
  student_print(&a);

  student_init(&b, 21, "Scot");
  student_print(&b);

  return 0;
}
