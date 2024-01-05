/*
  [메모리 기억공간 관리 함수]
    1. memcmp()
    2. memcpy()
    3. memset()
      - 기억공간의 자료를 지정한 문자로 채우는 함수
      - 초기화나 내용 삭제를 위해 주로 사용
      - 형식: void * memset(void *s, int c, size_t n); -> 포인터 s가 가리키는 곳을 c값으로 n byte만큼 채운다
*/ 
#include <stdio.h>
#include <string.h>
void main() {
  char s[] = "1234567890";
  int stat;

  printf("memset() 실행 전 s 데이터: %s\n", s); // 1234567890

  memset(s, '*', strlen(s));

  printf("memset() 실행 후 s 데이터: %s\n", s); // **********
}