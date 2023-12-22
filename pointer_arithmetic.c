// 포인터 연산
#include <stdio.h>
void main() {
  int i, j, *p, *p2, *p3, a[3] = {1, 2, 3};
  p = &a;
  p2 = &a[2];
  p3 = p2 - 1;
  i = p2 - p3;
  j = p3 - p2;


  printf("*a[0] = %d\n", p); // 1828499096
  printf("*a[1] = %d\n", p + 1); // 1828499100
  printf("*a[2] = %d\n", p + 2); // 1828499104 -> int 배열이므로 각 4byte씩 차지해서 포인터를 하나씩 증가시켜보면 주소값이 4씩 증가된 걸 볼 수 있음
  printf("p2 = %d\n", p2); // 1828499104 -> a[2]의 주소값
  printf("*(p + 2) = %d\n", *(p + 2)); // 3 -> p는 a 배열의 주소값(배열의 시작인 a[0]의 주소값을 가짐)을 가지고, 주소값을 2 증가시켜 a[2]에 해당하는 값 3이 출력됨
  printf("*p3 = %d\n", *p3); // 2 -> p3는 p2 포인터에서 1을 뺀 값인 a[1]의 주소값을 가지므로 *p3는 a[1]의 값인 2가 됨
  printf("i = %d\n", i); // 1 -> p2 - p3는 &a[2] - &a[1]이고, 두 포인터 간의 뺄셈은 가능하므로 2 - 1 = 1이 됨 (단, 포인터 간의 덧셈은 불가!)
  printf("j = %d\n", j); // -1 -> 1 - 2 = -1 
  printf("p++ = %d\n", p++); // 1828499096 -> p 출력 후 p = p + 1
  printf("*p = %d\n", *p); // 2 -> 위에서 p = p + 1이 되어 a[1]의 값인 2가 출력됨
  printf("*++p = %d\n", *++p); // 3 -> p를 증가 후 출력이므로 p에서 1 증가한 a[2] 출력 (위에서 이미 1 더해져 a[1]돼서 또 1 더하면 a[2]가 됨)
  printf("*p + 2 = %d\n", *p + 2); // 5 -> 3 + 2 = 5 이땐 포인터 간의 연산이 아닌 *p 포인터 내용인 3에서 걍 2를 더한 거라 연산 가능
  printf("*p - 2 = %d\n", *p - 2); // 1 -> 3 - 2 = 1 
}