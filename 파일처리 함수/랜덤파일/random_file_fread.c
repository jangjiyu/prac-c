// 입력함수: fread(읽을 자료변수 - 포인터형, 레코드길이, 레코드개수, 파일포인터)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
  FILE *fp;
  char name[10];
  fp = fopen("sample.dat", "rb");

  if(fp == NULL) {
    puts("파일을 열 수 없습니다!");
    exit(1);
  }

  while (1) {
    if(fread(name, 10, 1, fp) != 1) // 레코드의 개수가 1이므로 1이 아닌 값이 리턴되면 break
      break;
    puts(name);
  }

  fclose(fp);
}