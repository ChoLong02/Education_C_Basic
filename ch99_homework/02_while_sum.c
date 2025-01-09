#include <stdio.h>

// 문제: while문을 사용해서 1~100까지의 값을 사용해서
//       홀수합, 짝수합을 계산하세요.

int main(void) {
    int num = 1;
    int even_total = 0;
    int odd_total = 0;

    while (num <= 100) {
        if(num % 2 == 0) {
            even_total += num;
        } else {
            odd_total += num;
        }
        num++;
    }
    printf("짝수 총합: %d\n", even_total);
    printf("홀수 총합: %d", odd_total);
}