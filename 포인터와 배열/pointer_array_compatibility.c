// 포인터의 호환성 (with 배열)
#include <stdio.h>
void main() {
  char A[] = "array";
  char *p = "pointer";
  int i;

  for(i = 0; i < 5; i++) {
    printf("*(A + %d) : %c\n", i, *(A + i));  // 배열을 포인터 형식으로 참조
  }
  /*
    *(A + 0) : a
    *(A + 1) : r
    *(A + 2) : r
    *(A + 3) : a
    *(A + 4) : y
  */

  for(i = 0; i < 7; i++) {
    printf("p[%d] : %c\n", i, p[i]);  // 포인터를 배열 형식으로 참조
  }
    /*
    p[0] : p
    p[1] : o
    p[2] : i
    p[3] : n
    p[4] : t
    p[5] : e
    p[6] : r
  */

  printf("p = %s\n", p);  // pointer
  printf("*p = %c\n", *p);  // p

  p++; // 배열은 'A++'처럼 연산 불가하지만 포인터는 p++, p--와 같이 값 변경 가능
  printf("p = %s\n", p);  // ointer
  printf("*p = %c\n", *p);  // o
}

/*
  [포인터와 배열의 관계 - 기억 공간 확보의 차이]
  1. 배열
    - 기억 공간 중 자료 영역을 '고정적'으로 확보
  2. 포인터
    - 기억 공간 중 자료 영역을 '유동적'으로 확보
    - 필요할 때만 기억 공간을 확보하여 자료의 개수가 가변적인 경우 효과적
*/