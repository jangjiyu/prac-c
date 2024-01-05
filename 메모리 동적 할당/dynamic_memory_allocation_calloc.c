/*
  [메모리 동적 할당 순서]
    1. 기억공간을 동적으로 할당받을 변수를 포인터로 선언
    2. malloc(), calloc(), realloc() 등의 함수를 이용하여 기억 공간을 동적으로 할당
    3. 기억공간 사용이 끝나면 free() 함수를 이용하여 기억공간 해제
*/
/*
  [calloc()]
    - 형식: void * calloc(int n, int size);
    - malloc()과 대부분 동일하나 malloc()과 달리 0으로 초기화 됨
*/ 
#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  int *a;

  a = (int *)calloc(5, sizeof(int));

  for(i = 0; i < 5; i++) {
    printf("%d\n", a[i]); // 0 -> calloc()은 0으로 초기화 되므로
  }

  free(a);
}