// 함수와 구조체
// 함수에서 매개변수로 구조체 or 구조체 포인터를 사용
// 구조체 값을 통채로 전달하면 속도도 느려지고 메모리 낭비 문제가 생겨 구조체 포인터로 참조에 의한 자료 전달
#include <stdio.h>
struct num calc(struct num *);  // 함수 원형 정의할 때 매개변수로 구조체 포인터를 받는다고 정의
struct num {
  int x;
  int y;
  int sum;
  int mul;
};
void main() {
  struct num number1;
  number1.x = 10;
  number1.y = 20;

  calc(&number1); // 참조호출(주소값 전달)

  printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
}
struct num calc(struct num * number2) { // 구조체 포인터를 전달 받음
  number2 -> sum = number2 -> x + number2 -> y;
  number2 -> mul = number2 -> x * number2 -> y;
}
