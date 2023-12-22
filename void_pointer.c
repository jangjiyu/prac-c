// 프로그램 실행 시 자료형이 결정되는 경우에 사용
// 저장하기 전 명시적 형변환 필요
#include <stdio.h>
void main() {
  int a = 100;
  char b = 'b';
  void *p = NULL;

  p = (int*)&a; // a에 해당하는 자료형 int를 명시적 형변환인 '(int*)'로 표현해줘야함
  printf("*p = %d\n", *(int*)p); // 100
  p = (char*)&b;
  printf("*p = %c\n", *(char*)p); // 'b'
}