#include <stdio.h>

// while문으로 구구단 2단 출력

int main() {
    for(int i=1; i<=9; i++) {
        printf("2x%d=%d\n", i, 2*i);
    }    

    int j = 1;
    while(j <= 9) {
        printf("2x%d=%d\n", j, 2*j);
        j += 1;
    }
}