#include <stdio.h>
#include <stdlib.h>
void main() {
  FILE *fp;
  char no[10], name[10];
  int mid, term, rep, att;
  fp = fopen("sample.dat", "r");

  if(fp == NULL) {
    printf("파일을 열 수 없습니다!");
    exit(1);
  }

  printf("학번 이름 중간 기말 리포트 출석\n");

  while (!feof(fp)) // feof() 함수로 파일의 끝을 판별
    fscanf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, &mid, &term, &rep, &att);  // fscanf(파일포인터 변수, 입력형식, 변수)
    printf("%-10s %-8s %4d %4d %4d %4d", no, name, mid, term, rep, att);

  fclose(fp);
}