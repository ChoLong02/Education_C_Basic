#include <stdio.h>




int mp(int base, int exp) {
    int res = 1;
    for(int i=0; i < exp; i++){
        // i=0     2=1*2    
        // i=1     4=2*2
        // i=2     8=4*2
        // i=3    16=8*2
        // i=4    32=16*2
        // i=5    64=32*2
        // i=6   128=64*2
        // i=7   256=128*2
        // i=8   512=256*2
        // i=9  1024=512*2
        res = res * base;
    }
    return res;
}

int main(){
    int res;
    res = mp(2,10);
    printf("%d",res);  // 1024
    return 0;
}

