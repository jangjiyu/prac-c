// 1차원 배열과 포인터
#include <stdio.h>
void main() {
  char s[] = "SCIENCE";
  char *cp;
  cp = s; // 포인터 cp를 이용해 배열 s의 내용 참조 (배열 s의 시작 공간 s[0] 주소를 포인팅), cp = s[0];도 동일함

  printf("cp = %s\n", cp); // SCIENCE
  printf("*cp = %c\n", *cp); // S
  printf("cp + 1 = %s\n", cp + 1); // CIENCE -> cp + 1은 &s[1]의 주소를 가리키고 s[1]부터의 배열이 모두 출력됨
  printf("*(cp + 1) = %c\n", *(cp + 1)); // C -> cp + 1 주소값인 s[1]의 값인 C가 출력됨
  printf("&s[1] = %s\n", &s[1]); // CIENCE
  printf("s[1] = %c\n", s[1]); // C
}