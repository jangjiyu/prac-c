// 구조체
#include <stdio.h>
#include <string.h>
struct person {
  char name[9];
  int age;
  char sex;
};
void main() {
  struct person X = { "홍길동", 20, 'M' };
  struct person Y;
  strcpy(Y.name, "둘리"); // 문자열복사함수 - 구조체 값에 문자열 대입할 때 strcpy() 함수 사용
  Y.age = 30;
  Y.sex = 'M';

  printf("X: %s, %d, %c\n", X.name, X.age, X.sex);
  printf("Y: %s, %d, %c\n", Y.name, Y.age, Y.sex);
  printf("sizeof(struct person): %d\n", sizeof(struct person)); // 20 -> char 자료형은 1byte이지만 struct의 멤버 중 가장 큰 자료형의 크기로 할당되어 실제로는 int의 크기인 4byte로 확보됨 => 12(9byte이지만 int크기 4의 배수로 할당 됨) + 4 + 4
  printf("sizeof(X.name): %d\n", sizeof(X.name)); // 9 -> 하지만 구조체 멤버의 크기는 실제 자료형에 정의된 크기로 나옴
  printf("sizeof(X.age): %d\n", sizeof(X.age));  // 4
  printf("sizeof(X.sex): %d\n", sizeof(X.sex));  // 1
}