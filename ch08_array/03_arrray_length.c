#include <stdio.h>

// 배열 길이 계산
//  - C언어는 sizeof() 계산
//  
// ※ C언어 이외 객체지향언어(JAVA, PYTHON, 등등)
//    - 배열을 객체로 표현
//    - 기본적으로 배열이름.length → 배열 길이
//    -            len(배열이름)   → 배열 길이

int main() {
    int score[5];
    // sizeof(score)     → 20 Byte
    // sizeof(socre[0])  → 4 Byte
    int count = sizeof(score) / sizeof(score[0]);
    printf("배열길이: %d", count);

    for(int i=0; i < count; i++) {
        // 블라블라~
    }
}