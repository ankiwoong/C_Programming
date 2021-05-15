/* 도입부 */
#include <stdio.h>              // printf()와 scanf()를 사용하기 위한 헤더 파일 포함
#pragma warning(disable : 4996) // 권장하지 않은 함수 사용에 대한 경고 메시지 무시

int a, b, c;               // 정수를 저장하는 변수 선언
int product(int x, int y); // 사용자 함수 원형

/* main() 함수 */
void main()
{
    printf("2개의 정수를 입력하시오.\n");
    printf("정수 x : "); // x
    scanf("%d", &a);
    printf("정수 y : "); // y
    scanf("%d", &b);
    c = product(a, b);                                                         // result
    printf("x(%d)와 y(%d)의 평균값에 부호를 반전한 값은 %d입니다.", a, b, -c); // 부호 반전 후 출력
}

/* 두 수의 평균 값을 돌려주는 사용자 함수 */
int product(int x, int y)
{
    return ((x + y) / 2);
}