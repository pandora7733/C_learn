#include <stdio.h>

int main(void) {

    // array
    int subway_1 = 30;
    int subway_2 = 40;
    int subway_3 = 50;

    printf("지하철 1호차의 승객 수는 %d 명입니다.\n", subway_1);
    printf("지하철 2호차의 승객 수는 %d 명입니다.\n", subway_2);
    printf("지하철 3호차의 승객 수는 %d 명입니다.\n", subway_3);

    // 여러 개의 변수를 함께, 동시에 생성
    int subway_array[3]; // [0] [1] [2]
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0; i < 3; i++) {
        printf("지하철 %d호차의 승객 수는 %d 명입니다.\n", i+1, subway_array[i]);
    }

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 배열 크기는 항상 상수로 선언
    int size = 10;
    int arr2[10] = {1, 2};

    for (int i = 0; i < size; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    float arr3[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    for (int i = 0; i < 5; i++) {
        printf("arr3[%d] = %.1f\n", i, arr3[i]);
    }

    // 문자, 문자열
    char c = 'A';
    printf("c = %c\n", c);
    char str[5] = "Hello"; // 문자 끝에는 항상 NULL문자('\0')가 들어가야 함
    str[5] = 'S';
    printf("str = %s\n", str);
    char str2[6] = "Hello";
    printf("str2 = %s\n", str2);

    return 0;
}