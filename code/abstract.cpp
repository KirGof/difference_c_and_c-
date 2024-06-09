#include <cstdio>
#include <cstring>

class Person {
protected:
  int age;
  char name[30];

public:
  Person(int age, const char *name); // constructor
  virtual void print() const = 0;
};

class Student : public Person {
public:
  Student(int age, const char *name)
      : Person(age, name) {} // constructor initialization list
  void print() const;
};

Person::Person(int age, const char *name) {
  this->age = age;
  strcpy(this->name, name);
}

void Student::print() const {
  printf("Hi! I'm %s of %d years old!\n", this->name, this->age);
}

class Teacher : public Person {
public:
  Teacher(int age, const char *name)
      : Person(age, name) {} // constructor initialization list
  void print() const;
};

void Teacher::print() const {
  printf("Hello! I'm %s of %d years old!\n", this->name, this->age);
}

int main() {

  // if parameters are passed, the constructor is not default
  // the constructor is always called
  Student a(18, "John");
  Teacher b(33, "Scot");
  Student c(18, "Mary");

  Person *people[3] = {&a, &b, &c};
  for (int i = 0; i < 3; i++) {
    people[i]->print();
  }
  return 0;
}
