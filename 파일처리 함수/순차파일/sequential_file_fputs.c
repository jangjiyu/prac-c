#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
  char name[64];
  FILE *fp;
  fp = fopen("sample.dat", "w");

  if(fp == NULL) {
    puts("파일을 열 수 없습니다!");
    exit(1);
  }
  
  gets(name);

  while(strcmp(name, "end")) {
    strcat(name, "\n"); // 레코드의 길이가 모두 다르므로 개행문자 추가
    fputs(name, fp);
    gets(name);
  }

  fclose(fp);
}