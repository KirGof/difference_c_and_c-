#include <cstdio>
#include <cstring>

struct Student {
  int age;
  char name[30];
  void init(struct Student *person, int age, const char *name);
  void print(struct Student *person);
};

void Student::init(struct Student *person, int age, const char *name) {
  person->age = age;
  strcpy(person->name, name);
}

void Student::print(struct Student *person) {
  printf("Hi! I'm %s of %d years old!\n", person->name, person->age);
}

int main() {

  struct Student a, b;
  a.init(&a, 18, "John");
  b.print(&a);

  b.init(&b, 21, "Scot");
  b.print(&b);

  return 0;
}
