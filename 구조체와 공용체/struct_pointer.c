// 구조체 포인터
#include <stdio.h>
void main() {
  struct person {
    char name[8];
    int age;
    char sex;
  };

  struct person X[4] = {
    { "john", 20, 'M' },
    { "chloe", 25, 'F' },
    { "james", 30, 'M' },
    { "judy", 35, 'F' }
  };

  struct person *pt;
  pt = X;

  /* 
  [구조체 포인터의 멤버 참조]
    1. 도트 연산자(.) 사용
      (*pt).name
    2. 포인터 연산자(->) 사용
      pt -> name
  */

  printf("%s, %d, %c\n", pt -> name, pt -> age, pt -> sex);

  pt += 3;
  printf("%s, %d, %c\n", pt -> name, pt -> age, pt -> sex);

  pt--;
  printf("%s, %d, %c\n", pt -> name, pt -> age, pt -> sex);
}