#include <iostream>
using namespace std;

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

student upgrade(student child) {
    // เขียนคำสั่ง
}

int main() {
    student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    aboy = upgrade(aboy);
    cout << aboy.gpa << endl;
    return 0;
}
