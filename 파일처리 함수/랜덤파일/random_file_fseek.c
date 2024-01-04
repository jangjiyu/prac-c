// 랜덤파일의 위치 제어
// fseek(파일포인터 변수, 이동할 상대위치, 기준위치를 지정하는 모드)
// 파일의 포인터를 임의의 위치로 이동시키는 함수
// 랜덤파일의 특정부분을 입출력할 수 있음
// 기준위치 지정모드
//  - SEEK_SET: 파일의 시작 위치
//  - SEEK_CUR: 현재 파일포인터의 위치
//  - SEEK_END: 파일의 끝 위치
#include <stdio.h>
#include <string.h>
void main() {
  FILE *fp;
  char str[15];
  fp = fopen("sample.dat", "rt");

  fseek(fp, 7, SEEK_SET);
  fgets(str, 4, fp); // 이때 포인터 위치가 출력된 것 뒤로 바뀜
  printf("7번째부터 3글자 출력: %s\n", str);

  fseek(fp, -2, SEEK_CUR);
  fgets(str, 3, fp);
  printf("현재 위치에서 앞에 2글자부터 2글자 출력: %s\n", str);

  fseek(fp, -9, SEEK_END);
  fgets(str, 6, fp);
  printf("맨 뒤에서 9칸 앞부터 5글자 출력: %s\n", str);

  fclose(fp);
}