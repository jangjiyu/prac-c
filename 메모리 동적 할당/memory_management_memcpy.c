/*
  [메모리 기억공간 관리 함수]
    1. memcmp()
    2. memcpy()
      - 기억공간의 자료를 다른 기억공간 영역으로 복사(copy)
      - 형식: void * memcpy(void *dest, const void *src, size_t n); -> src에서 n byte만큼 dest에 복사
    3. memset()
*/ 
#include <stdio.h>
#include <string.h>
void main() {
  char src[] = "1234567890";
  char dest[] = "abcdefghijklmnopqrstuvwxyz";
  int stat;

  printf("memcpy() 실행 전 dest 데이터: %s\n", dest); // abcdefghijklmnopqrstuvwxyz

  stat = (char *)memcpy(dest, src, strlen(src));

  if(stat)
    printf("memcpy() 실행 후 dest 데이터: %s\n", dest); // 1234567890klmnopqrstuvwxyz
  else 
    printf("복사 실패!\n");
}