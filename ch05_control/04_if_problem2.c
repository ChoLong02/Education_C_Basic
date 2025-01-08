#include <stdio.h>

int main() {
    // 0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램

    // 1. 입력부
    int score;   // 점수(0~100점)
    char grade;  // 학점(A, B, C, D, F)
    printf("점수: ");
    scanf("%d", &score);
    // + 유효성 체크: 사용자가 입력한 값이 유효한 값인지 체크
    //  1. 값이 있는지 체크
    //  2. 정수형 숫자인지 체크
    //  3. 0~100 사이의 값인지 범위 체크



    // 2. 제어부
    if(score >= 91) {  // 91~100
        grade = 'A';
    } else if(score >= 81) {
        grade = 'B';
    } else if(score >= 71) {
        grade = 'C';
    } else if(score >= 61) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 3. 출력부
    printf("당신의 점수는 %d점으로 %c학점 입니다.", score, grade);
}