/*
  [기억 공간 확보 방법]
  1. 메모리 정적 할당
    - 기억공간의 '데이터' 영역과 '스택' 영역 이용
    - 프로그램을 작성하는 단계에서 필요한 기억공간의 크기 결정
    - 변수 선언과 같이 할당시켜 줘야 할 기억공간의 한계 크기를 명확히 알고 있는 경우 사용
    - 기억공간의 크기가 정확하지 않을 경우 메모리 낭비되는 단점 존재
  2. 메모리 동적 할당
    - 기억공간의 '힙' 영역 이용
    - 프로그램 실행 중에 입력되는 자료에 맞게끔 기억공간의 크기 결정, 재조정도 가능
    - 배열의 크기가 미리 정해지지 않고 프로그램 실행 중 정해야할 경우 유용
    - 시간이 지체되는 단점 존재
  
  [기억 공간 할당 영역]
  1. 데이터 영역
    - 전역 변수와 static 변수가 저장되는 영역
    - 프로그램 시작과 동시에 할당, 종료되면 소멸
  2. 스택 영역
    - 지역 변수와 매개 변수가 저장되는 영역
    - 함수 호출이 완료되면 사라짐
  3. 힙 영역
    - 프로그래머의 필요에 의해 할당/소멸이 이루어지는 영역
    - 프로그램 실행 중 자유롭게 크기가 늘어나고 줄어들어 자유 기억공간이라 불림
    - 메모리 동적 할당에 사용되는 영역
*/
#include <stdio.h>
#include <stdlib.h>
void main() {
  int size;
  char *a;
  
  printf("입력할 주소의 문자열 크기는?");

  scanf("%d", &size);

  a = (char *)malloc(sizeof(char) *size);

  printf("주소 입력: ");
  scanf("%s", a);

  printf("입력된 주소는 %s입니다\n", a);

  free(a);
}