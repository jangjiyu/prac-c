// 공용체
// 멤버들이 모두 다른 자료형을 가질 때 기억공간을 절약하기 위해 사용
// 필요에 따라 자료형을 선택해 값 저장 가능
#include <stdio.h>
void main() {
  union test { // 공용체 정의 
    short i;
    float f;
    double d;
  };
  union test u; // 공용체 변수 선언
  u.i = u.f = u.d = 0;

  printf("%dbyte\n", sizeof(u));  // 8 -> 가장 큰 자료형 double의 8byte 가짐

  printf("u.i = %d, u.f = %f, u.d = %f\n", u.i, u.f, u.d);  // u.i = 0, u.f = 0.000000, u.d = 0.000000 (각자 타입에 맞는 0 값을 출력)

  u.i = 100;
  printf("u.i = %d, u.f = %f, u.d = %f\n", u.i, u.f, u.d);  // u.i = 100, u.f = 0.000000, u.d = 0.000000

  u.f = 0.5;
  printf("u.i = %d, u.f = %f, u.d = %f\n", u.i, u.f, u.d);  // u.i = 0, u.f = 0.500000, u.d = 0.000000
  // 공용체에서 하나의 멤버의 값을 바꾸게 되면, 해당 메모리 위치에 새로운 값이 저장 -> u.i의 100이 저장된 메모리에 0.5가 새로 저장되어짐

  u.d = 0.012345;
  printf("u.i = %d, u.f = %f, u.d = %f\n", u.i, u.f, u.d);  // u.i = 10339, u.f = -11762681694388224.000000, u.d = 0.012345
  /*
    [왜 u.i와 u.f에 이상한 값이 들어가는지 챗gpt에게 물어보았다.]
    double 타입의 멤버 d에 0.012345라는 값이 저장되고, 이 값은 double 타입이 가지는 8바이트의 메모리를 사용합니다. double은 부동소수점 숫자를 표현하기 위해 특정한 내부 형식을 사용하여 메모리에 값을 저장합니다. 여기서 주요한 것은 double의 메모리 표현 형식이 short 또는 float와 완전히 다르다는 점입니다.
    u.i (short 타입)와 u.f (float 타입)를 출력하라고 하면, double 값 0.012345를 나타내는 메모리에서 short와 float로 해석될 바이트들을 각각 읽게 됩니다. 그러나 0.012345라는 double 값의 메모리 표현이 short나 float 타입으로 적절히 해석될 수 있는 형태가 아니기 때문에 이상하고 예측 불가능한 값이 출력되는 것입니다.
    short는 보통 2바이트 정수이고, float는 4바이트 부동 소수점입니다. double 값을 short나 float로 간주하여 해당 바이트들을 해석하려고 하면 전혀 다른 수가 나옵니다. 이는 내부적인 비트 구성이 달라서 각 타입의 값은 서로 완전히 다른 방식으로 메모리에 표현되기 때문입니다.
    결론적으로, 공용체를 사용할 때는 하나의 멤버에 값을 할당한 후 그 멤버만을 사용하는 것이 안전하고, 다른 타입의 멤버를 읽는 것은 정의되지 않은 행동을 유발할 수 있습니다.
  */
}