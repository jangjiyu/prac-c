/*
  [메모리 동적 할당 순서]
    1. 기억공간을 동적으로 할당받을 변수를 포인터로 선언
    2. malloc(), calloc(), realloc() 등의 함수를 이용하여 기억 공간을 동적으로 할당
    3. 기억공간 사용이 끝나면 free() 함수를 이용하여 기억공간 해제
*/
/*
  [malloc()]
    - 형식: void * malloc(size_t number_of_bytes);
    - 인자로 할당 받고자 하는 기억공간의 크기를 byte 단위로 전달
    - 힙 영역에 그 크기만큼 기억공간을 할당하고, 할당된 기억공간의 첫번째 주소를 반환
    - void *로 명시하여 어떤 형으로든 형 변환 가능
    - 초기화 안 됨(기억공간 초기화를 위해선 memset() 사용)
*/ 
#include <stdio.h>
#include <stdlib.h>
void main() {
  int size;
  char *str;

  printf("문자열의 크기를 입력하세요: ");
  scanf("%d", &size);

  str = (char *)malloc(size + 1); // 포인터 변수 str과 자료형을 일치시키기 위해 '(char *)'로 강제 형변환

  if(str == NULL) {
    puts("기억공간 할당 실패!");
    exit(1);
  }

  printf("문자열을 입력하세요: ");
  scanf("%s", str);

  printf("동적 할당된 메모리에 저장된 문자열: %s\n", str);

  free(str);
}