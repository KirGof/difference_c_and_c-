#include <cstdio>
#include <cstring>

class Person {
protected:
  int age;
  char name[30];
};

class Student : public Person {
public:
  Student(int age, const char *name); // constructor
  void print() const;
};

Student::Student(int age, const char *name) {
  this->age = age;
  strcpy(this->name, name);
}

void Student::print() const {
  printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
}

class Teacher : public Person {
public:
  Teacher(int age, const char *name); // constructor
  void print() const;
};

Teacher::Teacher(int age, const char *name) {
  this->age = age;
  strcpy(this->name, name);
}

void Teacher::print() const {
  printf("Hello! I'm %s of %d years old!\n", this->name, this->age);
}

int main() {

  // if parameters are passed, the constructor is not default
  // the constructor is always called
  Student a(18, "John");
  a.print();

  Teacher b(33, "Scot");
  b.print();

  Student c(18, "Mary");
  c.print();

  return 0;
}
