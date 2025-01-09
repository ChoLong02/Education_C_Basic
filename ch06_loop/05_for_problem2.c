#include <stdio.h>

// 구구단 2~9단 출력
//   반복문1개→ i: 2~9단
//     반복문1개→ 단(ix1~ix9) 

int main() {
    for(int i=2; i<=9; i++) { 
        for(int j=1; j <= 9; j++) {  
            printf("%dx%d=%d", i, j, i*j);
        }
    }
}