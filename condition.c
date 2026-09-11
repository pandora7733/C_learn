#include <stdio.h>

int main(void) {

    // if ~ else조건문
    int age = 15;
    if (age >= 20) {
        printf("일반인 입니다.\n");
    } else {
        printf("학생 입니다.\n");
    }

    // if ~ else if ~ else 조건문
    age = 8;
    if (age >= 8 && age <= 13) {
        printf("초등학생입니다.\n");
    } else if (age >= 14 && age <= 16) {
        printf("중학생입니다.\n");
    } else if (age >= 17 && age <= 19) {
        printf("고등학생입니다.\n");
    } else {
        printf("학생이 아닙니다.\n");
    }

    //  break, continue
    for (int i = 1; i <= 30; i++) {
        if (i >= 6) {
            printf("반복문 종료\n");
            break;
        }
        printf("%d\n", i);
    }

    for (int i = 1; i <= 30; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    


    // && || and or 연산자
    int a = 10;
    int b = 10;
    int c = 12;
    int d = 13;
    if (a == b && c == d) {
        printf("a와 b는 같고, c와 d도 같습니다\n");
    } else {
        printf("값이 서로 다릅니다.\n");
    }

    if (a == b || c == d) {
        printf("a와 b는 같거나, c와 d도 같습니다\n");
    } else {
        printf("값이 서로 다릅니다.\n");
    }

    return 0;
}