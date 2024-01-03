// 포인터 변수는 *을 붙여 선언 ex) int *p;
// 포인터 변수 초기화는 주소로!
// int *p;
// p = 100; 처럼 정수 할당 시 에러 발생
#include <stdio.h>
void main() {
  int *p, i = 3, j;
  p = &i;
  j = *p;

  printf("*p = %d\n", *p); // 3
  printf("p = %x\n", p); // 주소값
  printf("i = %d\n", i); // 3

  *p = 100;
  j++;

  printf("*p = %d, i = %i\n", *p, i); // 100 -> *p에 100을 할당하면서 포인터 변수 p의 주소값인 &i의 값이 100으로 바뀌면서 *p, i 모두 100이 됨
  printf("p = %x\n", p); // 주소값
  printf("j = %d\n", j); // 4 -> j에는 p에 들어있는 주소값의 내용이 대입되었으므로 j의 값만 증가되고 p에 대입된 i의 주소값과는 상관없어 i값 변화는 X
}