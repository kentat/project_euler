#include <stdio.h>

/* 2520 は 1 から 10 の数字の全ての整数で割り切れる数字であり, そのような数字の中では最小の値である. */
/*     では, 1 から 20 までの整数全てで割り切れる数字の中で最小の正の数はいくらになるか. */


int main(void)
{
    long i = 20;
    while(i++){
        if(i%20 != 0) continue;
        if(i%19 != 0) continue;
        if(i%18 != 0) continue;
        if(i%17 != 0) continue;
        if(i%16 != 0) continue;
        if(i%15 != 0) continue;
        if(i%14 != 0) continue;
        if(i%13 != 0) continue;
        if(i%12 != 0) continue;
        if(i%11 != 0) continue;
        break;
    }
    printf ("%d\n",i);
    return 0;
}




