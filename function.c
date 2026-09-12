#include <stdio.h>

// 함수 선언
void p (int num);
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);

int main(void) {
    // function

    int num = 2;
    p(num);

    // 2+3
    num = num + 3;
    p(num);

    // 5-1
    num -= 1;
    p(num);

    // 4*3
    num *= 3;
    p(num);

    int num1 = 10;
    int num2 = 20;
    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
    printf("%d * %d = %d\n", num1, num2, mul(num1, num2));


    return 0;
}

void p (int num) {
    printf("num 은 %d 입니다.\n", num);
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}