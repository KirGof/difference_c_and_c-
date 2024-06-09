#include <iostream>
#include <string>
#include <vector>

class Person {
protected:
  int age;
  std::string name;

public:
  Person(int age, std::string name); // constructor
  virtual void print() const = 0;
};

class Student : public Person {
public:
  Student(int age, const char *name)
      : Person(age, name) {} // constructor initialization list
  void print() const;
};

Person::Person(int age_, std::string name_) {
  age = age_;
  name = name_;
}

void Student::print() const {
  std::cout << "Hi! I'm " << name << " of " << age << " years old!\n";
}

class Teacher : public Person {
public:
  Teacher(int age, std::string name)
      : Person(age, name) {} // constructor initialization list
  void print() const;
};

void Teacher::print() const {
  std::cout << "Hello! I'm " << name << " of " << age << " years old!\n";
}

int main() {

  // if parameters are passed, the constructor is not default
  // the constructor is always called
  std::vector<Person *> people = {new Student(18, "John"),
                                  new Teacher(33, "Scot"),
                                  new Student(18, "Mary")};

  for (int i = 0; i < people.size(); i++) {
    people[i]->print();
  }

  people.push_back(new Teacher(36, "Biba"));

  for (auto x : people) { // cycle from c++11, like python
    x->print();
  }

  for (int i = 0; i < people.size(); i++) {
    delete people[i];
  }
  return 0;
}
