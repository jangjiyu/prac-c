// 이중 포인터 (pointer to pointer)
// 자료가 있는 곳을 이중으로 가리키는 포인터 (이중 포인터가 가르키는 주소로 가보면 데이터가 아닌 주소값이 들어있고 그 주소에 데이터가 들어 있음)
#include <stdio.h>
void main() {
  char a = 'A', *p, **pp;  // ** 별 두개로 이중 포인터 선언
  p = &a;
  pp = &p;

  printf("**pp = %c", **pp); // A
}