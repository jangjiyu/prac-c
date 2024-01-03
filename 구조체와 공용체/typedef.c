// typedef
// 이미 존재하는 자료형에 새로운 이름을 붙임
// 구조체 형을 선언하는데 많이 사용
#include <stdio.h>
void main() {
  typedef int * PTR;  // int *를 PTR로 재정의
  PTR p1, p2; // int *p1, *p2를 의미함

  struct data {
    int x;
    int y;
  };
  typedef struct data DATA;
  DATA d = { 1, 2 };
  
  printf("d.x = %d, d.y = %d\n", d.x, d.y);

  typedef struct data2 {
    int x;
    int y;
  } DATA2;  // 구조체 정의와 typedef 선언을 한번에
  DATA2 d2 = { 3, 4 };

  printf("d2.x = %d, d2.y = %d\n", d2.x, d2.y);
}