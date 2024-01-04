#include <stdio.h>
#include <stdlib.h>
void main() {
  FILE *fp;
  char name[20];
  fp = fopen("sample.dat", "r");

  if(fp == NULL) {
    puts("파일을 열 수 없습니다!");
    exit(1);
  }

  while ((fgets(name, 20, fp) != NULL)) // fgets(문자열 변수, 문자열 길이 + 1, 파일포인터 변수)
    printf("%s", name);

  fclose(fp);
}