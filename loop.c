#include <stdio.h>

int main(void) {
    
    // ++ 증감 연산자
    int a = 10;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);

    int b = 20;
    printf("%d\n", ++b);
    printf("%d\n", b++);
    printf("%d\n", b);

    // 반복문
    // for, while, do while

    for(int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    int i = 1;
    while (i <= 10) {
        printf("Hello World %d\n", i);
        i ++;
    }

    i = 1;
    do {
        printf("Hello World %d\n", i);
        i++;
    } while (i <= 10);

    // 2중 반복문
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 2; i <= 9; i++) {
        printf("%d단\n", i);
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    // *
    // **
    // ***
    // ****
    // *****

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


    //     *
    //    **
    //   ***
    //  ****
    // *****

    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5 - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    

    return 0;
}