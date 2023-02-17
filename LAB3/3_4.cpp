#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void GetStudent(struct student (*child)[10], int *room);

int main() {
    struct student children[20][10];
    int group;
    GetStudent(children, &group);
    return 0;
}
