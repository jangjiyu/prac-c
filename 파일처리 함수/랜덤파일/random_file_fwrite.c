// 랜덤파일
// 레코드의 길이가 일정하여 파일의 임의의 위치에서 자료를 읽거나 쓸 수 있음
// 일반적으로 2진 모드로 파일을 open
// 2진 모드의 경우 텍스트 파일보다 적은 기억공간을 차지, 레코드의 길이를 프로그래머가 직접 결정, 파일 포인터의 위치 변경 가능
// 출력함수: fwrite(저장자료변수 - 포인터형 , 레코드길이, 레코드개수, 파일포인터)
// 입력함수: fread(읽을 자료변수 - 포인터형, 레코드길이, 레코드개수, 파일포인터)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
  FILE *fp;
  char name[10];
  fp = fopen("sample.dat", "wb");

  if(fp == NULL) {
    puts("파일을 열 수 없습니다!");
    exit(1);
  }

  gets(name);

  while (strcmp(name, "END")) {
    fwrite(name, 10, 1, fp);
    gets(name);
  }

  fclose(fp);
}