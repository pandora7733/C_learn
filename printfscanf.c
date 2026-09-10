#include <stdio.h>


int main(void) {
    
    // 정수형 변수
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);


    // 실수형 변수
    float f = 46.5;
    printf("%f\n", f);
    printf("%.2f\n", f);

    double d = 4.428;
    printf("%lf\n", d);
    printf("%.2lf\n", d);


    // 상수
    const int YEAR = 2024;
    printf("%d\n", YEAR);

    // printf
    // 연산
    int add = 10 + 20;
    printf("%d\n", add);
    printf("%d + %d = %d\n", 10, 20, 10+20);

    // scanf
    // 키보드 입력을 받아서 저장
    int input;
    printf("정수를 입력하세요: ");
    scanf("%d", &input);
    printf("입력한 정수: %d\n", input);

    int a, b, c;
    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("입력한 정수: %d, %d, %d\n", a, b, c);
    printf("첫번째 값: %d", a);
    printf("두번째 값: %d", b);
    printf("세번째 값: %d", c);

    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    char ch = 'A';
    printf("%c\n", ch);

    char str[256];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("%s\n", str);

    return 0;
}