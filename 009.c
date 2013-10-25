#include <stdio.h>

/* ピタゴラス数(ピタゴラスの定理を満たす自然数)とは a < b < c で以下の式を満たす数の組である. */
/*                                             a2 + b2 = c2 */
/* 例えば, 32 + 42 = 9 + 16 = 25 = 52 である. */
/* a + b + c = 1000 となるピタゴラスの三つ組が一つだけ存在する. */
/* これらの積 abc を計算しなさい. */

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    for(a=0;a<1000/3;a++){
        for(b=a+1;b<1000/2;b++){
            c=1000-(a+b);
            if(b>=c)
                break;
            if((a*a+b*b)==c*c)
                goto end;
        }
    }
end:
    printf ("%d\n",a*b*c);
    return 0;
}
