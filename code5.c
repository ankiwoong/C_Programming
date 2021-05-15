/* 도입부 */
#include <stdio.h>              // printf()와 scanf()를 사용하기 위한 헤더 파일 포함
#pragma warning(disable : 4996) // 권장하지 않은 함수 사용에 대한 경고 메시지 무시

int a, b, c;                      // 정수를 저장하는 변수 선언
float d;                          // 실수 를 저장하는 변수 선언
int product(int x, int y, int z); // 사용자 함수 원형

/* main() 함수 */
void main()
{
    printf("사다리꼴의 넓이를 구하기 위해 윗변, 밑변, 높이를 입력하시오.\n");
    printf("윗변 : "); // x
    scanf("%d", &a);
    printf("밑변 : "); // y
    scanf("%d", &b);
    printf("높이 : "); // z
    scanf("%d", &c);
    d = product(a, b, c);                                                                      // result
    printf("윗변(%d), 밑변(%d), 높이(%d)를 가지는 사다리꼴의 면적은 %.3f입니다.", a, b, c, d); // 출력
}

/* (윗변 + 밑변) * 높이 / 2 */
int product(int x, int y, int z)
{
    return ((x + y) * z / 2);
}