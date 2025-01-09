#include <stdio.h>
// 별찍기

int main() {
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=1; i<=5; i++) {  // 5번 반복
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("#####################################\n");
    // *****
    // ****
    // ***
    // **
    // *
    for(int i=5; i>=1; i--) {  // 5번 반복
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}