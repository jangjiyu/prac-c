// 순차파일의 레코드 추가
// 이미 만들어진 순차파일의 끝에 새로운 레코드 추가(append), 파일이 없으면 파일을 생성하고 기록
// fp = fopen("파일명", "a");
#include <stdio.h>
#include <stdlib.h>
void main() {
  FILE *fp;
  fp = fopen("sample.dat", "a");

  fputs("kim\n", fp);
  fputs("lee\n", fp);
  fputs("park\n", fp);

  fclose(fp);
}
