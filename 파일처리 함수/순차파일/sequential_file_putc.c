/* 
  [순차파일 출력함수]
    - 만들어진 파일에 자료를 '기록'하는 함수
    - putc() fputc() fputs() fprintf()
  [순차파일 입력함수]
    - 저장된 자료를 '읽어' 내는 함수
    - getc() fgetc() fgets() fscanf()
*/
#include <stdio.h>
#include <stdlib.h>
void main() {
  FILE *fp;
  char c;
  fp = fopen("sample.dat", "w");

  if(fp == NULL) {
    printf("파일을 열 수 없습니다!");
    exit(1);
  }

  while((c = getchar()) != EOF) // EOF = end of file / mac에서 EOF 강제 발생시키는 법: ctrl + D (window: ctrl + Z)
    putc(c, fp);

  fclose(fp);
}