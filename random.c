#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    printf("난수 초기화 이전..\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", rand() % 10);
    }

    srand(time(NULL)); // 나수 초기화
    printf("난수 초기화 이후..\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", rand() % 10);
    }

    printf("\n");

    // 가위 바위 보
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0) {
        printf("가위\n");
    } else if (i == 1) {
        printf("바위\n");
    } else {
        printf("보\n");
    }

    // switch ~ case 조건문
    srand(time(NULL));
    i = rand() % 3; // 0 ~ 2반환
    switch (i) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
        default:
            printf("잘못된 값입니다.\n");
    }

    return 0;
}