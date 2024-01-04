// 여러 자료형으로 구성된 레코드 저장
#include <stdio.h>
#include <stdlib.h>
void main () {
  FILE *fp;
  char no[10], name[10];
  int mid, term, rep, att, i;
  fp = fopen("sample.dat", "w");

  if(fp == NULL) {
    printf("파일을 열 수 없습니다!");
    exit(1);
  }

  fprintf(stdout, "학번 이름 중간 기말 레포트 출석 점수를 입력\n"); 
  // stdout(표준출력)은 모니터를 가리키는 특수한 파일포인터
  // stdin(표준입력): 키보드 / stderr(표준에러): 모니터

  for(i = 0; i < 2; i++) {
    scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
    fprintf(fp, "%10s %8s %3d %3d %3d %3d\n", no, name, mid, term, rep, att);
  }

  fclose(fp);
}