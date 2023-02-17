#include <iostream>
#include <cstring>

using namespace std;

struct student {
  char name[20];
  int age;
  char sex;
  float gpa;
};

void upgrade(struct student& child);

int main() {
  struct student aboy;
  aboy.sex = 'M';
  aboy.gpa = 3.00;
  upgrade(aboy);
  cout << aboy.gpa;
  return 0;
}

void upgrade(struct student& child) {
  // เขียนคำสั่ง
}

