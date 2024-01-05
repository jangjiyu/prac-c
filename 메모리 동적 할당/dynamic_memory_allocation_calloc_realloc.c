/*
  [메모리 동적 할당 순서]
    1. 기억공간을 동적으로 할당받을 변수를 포인터로 선언
    2. malloc(), calloc(), realloc() 등의 함수를 이용하여 기억 공간을 동적으로 할당
    3. 기억공간 사용이 끝나면 free() 함수를 이용하여 기억공간 해제
*/
/*
  [realloc()]
    - 형식: void * realloc(void *p, int size);
    - 재할당 때 사용
*/ 
#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  int *a;

  a = (int *)calloc(5, sizeof(int));  // int형 크기의 기억공간 5개 할당

  a = (int *)realloc(a, 10 * sizeof(int));  // int형 크기의 기억공간 10개 재할당

  free(a);
}