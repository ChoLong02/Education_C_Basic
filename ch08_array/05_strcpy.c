#include <stdio.h>
#include <string.h>  // 문자열 관련 함수 원형을 모아놓은 헤더 파일

// 배열에는 대입 연산자(=) 사용 불가
//  - 컴파일러가 배열 실행시 배열 이름을
//    배열 첫번째 요소의 주소번지로 변환
//    주소번지는 상수로 대입 불가능!

int main() {
    char name1[4] = "abc";
    // char(4 Byte) → name2(16 Byte)
    //  ㄴ 메모리 주소: 100번지 시작 100번지~115번지(name2)
    //  ㄴ name2 호출하면 100번지 주소(배열의 시작번지 주소)를 가져다 줌
    char name2[4];

    // 변수는 주소값
    //  예를 들어 name2는 100번지 주소를 의미
    //  대입연산자의 좌측항은 상수 불가!
    //  name2 = name1;  // 사용 불가
    strcpy(name2, name1);
    printf("%s", name2);
}
