// 포인터 배열 (포인터의 집합)
// 문자열 처리에 효과적
#include <stdio.h>
void main() {
  char *pa[4] = { "electronics", "data", "processing", "system" };
  // a[4][12]처럼 배열로 지정할 경우 모든 행이 12열의 기억 공간을 고정적으로 확보해서 빈 공간이 생김
  // 포인터 배열은 데이터 크기만큼 유동적으로 기억 공간 할당하여 2차원 배열에 비해 기억 공간 절약 효과가 있음

  printf("%c\n", *(pa[0])); // e
  printf("%c\n", *(pa[0] + 1)); // l
  printf("%c\n", *(pa[0] + 10)); // s

  printf("%c\n", *(pa[1])); // d
  printf("%c\n", *(pa[1] + 1)); // a

  int a[] = { 1, 2, 3, 4 };
  int b[] = { 5, 6, 7, 8 };
  int *pa2[2];
  pa2[0] = a;
  pa2[1] = b;

  printf("*(pa[0]) = %d\n", *(pa2[0])); // 1
  printf("*(pa[0] + 1) = %d\n", *(pa2[0] + 1)); // 2
  printf("*(pa[1]) = %d\n", *(pa2[1])); // 5
}