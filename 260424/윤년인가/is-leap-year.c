#include <stdio.h>

int main() {
    int y;

    // 연도 입력
    if (scanf("%d", &y) == 1) {
        // 윤년 판별 조건
        // 1. 4로 나누어 떨어짐 AND 100으로 나누어 떨어지지 않음
        // OR 
        // 2. 400으로 나누어 떨어짐
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }

    return 0;
}