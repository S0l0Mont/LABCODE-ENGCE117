#include <iostream>
#include <cstring>

void explode(char[], char, char[][10], int*);

int main() {
  char out[20][10];
  int num;
  explode("I/Love/You", '/', out, &num);
  return 0;
}

void explode(char str1[], char splitter, char str2[][10], int* count) {
  // เขียนคำสั่ง
}

/*ตัวอย่าง 
str1 = "I/Love/You"
splitter = '/'

จะได้ผลลัพธ์คือ
str2[0] = "I"
str2[1] = "Love"
str2[1] = "You"

count = 3