// 구조체 배열
#include <stdio.h>
void main() {
  struct person {
    char name[8];
    int age;
    char sex;
  };

  struct person X[3] = {
    { "john", 20, 'M' },
    { "chloe", 25, 'F' },
    { "james", 30, 'M' }
  };

  int i, sum = 0;
  for(i = 0; i < 3; i++) {
    sum += X[i].age;
  }
  
  printf("sum: %d\n", sum);
};