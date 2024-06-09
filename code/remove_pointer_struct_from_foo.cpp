#include <cstdio>
#include <cstring>

struct Student {
  int age;
  char name[30];
  void init(int age, const char *name);
  void print() const;
};

void Student::init(int age, const char *name) {
  this->age = age;
  strcpy(this->name, name);
}

void Student::print() const {
  printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
}

struct Teacher {
  int age;
  char name[30];
  void init(int age, const char *name);
  void print() const;
};

void Teacher::init(int age, const char *name) {
  this->age = age;
  strcpy(this->name, name);
}

void Teacher::print() const {
  printf("Hello! I'm %s of %d years old!\n", this->name, this->age);
}

int main() {

  struct Student a;
  a.init(18, "John");
  a.print();

  struct Teacher b;
  b.init(33, "Scot");
  b.print();

  struct Student c;
  c.init(18, "Mary");
  c.print();

  return 0;
}
