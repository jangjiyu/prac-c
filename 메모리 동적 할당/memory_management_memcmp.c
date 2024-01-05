/*
  [메모리 기억공간 관리 함수]
    1. memcmp()
      - 기억공간에 들어있는 자료를 주어진 크기만큼 비교(compare)하여 같은지 여부를 알 수 있게 해줌
      - 형식: int memcmp(void *s1, void *s2, size_t n); ->  s1, s2가 가리키는 기억공간의 내용을 n byte만큼 비교
      - s1 > s2 -> 양수
      - s1 < s2 -> 음수
      - s1 = s2 -> 0
    2. memcpy()
    3. memset()
*/ 
#include <stdio.h>
#include <string.h>
void main() {
  char *s1 = "aaa";
  char *s2 = "bbb";
  int stat;

  stat = memcmp(s1, s2, 3);

  printf("%d\n", stat); // -1 -> s2가 더 크므로
}