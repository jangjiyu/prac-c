// 구조체 비트필드
// 비트필드의 자료형은 int 또는 unsigned로 선언
// 포인터나 배열은 사용 안 됨
// 비트필트의 전체 크기는 시스템에서 제공하는 int의 크기 이내여야 함
#include <stdio.h>
void main() {
  struct test { 
    unsigned short a : 4; // 4 bit로 정의
    unsigned short b : 2; // 2 bit
    unsigned short c : 1; // 1 bit
    unsigned short d : 7; // 7 bit
  };
  // unsigned short(short int)는 2byte(= 16bit)
  // 16bit 중 총 14bit가 사용되어 남는 공간은 2bit만 생김, int(4byte)로 할 경우 더 많은 빈 공간이 생겨 short로 하는 게 효율적
  
  struct test v = { 1, 2, 3, 4 };

  printf("v는 %dbyte 사용\n", sizeof(v));
}