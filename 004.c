#include <stdio.h>

/* 左右どちらから読んでも同じ値になる数を回文数という. 2桁の数の積で表される回文数のうち, 最大のものは 9009 = 91 × 99 である. */
/*     では, 3桁の数の積で表される回文数の最大値を求めよ. */




int isok1st(long num)
{
    if(num>100000)
        return ((num/100000) == (num%10));
    if(num>10000)
        return ((num/10000) == (num%10));
    if(num>1000)
        return ((num/1000) == (num%10));
    return 1;
}

int isok2nd(long num)
{
    if(num>100000)
        return ((num/10000) == ((num/10))%10);
    if(num>10000)
        return ((num/1000) == ((num/10))%10);
    if(num>1000)
        return ((num/100) == ((num/10))%10);
    return 1;
}


int isok3rd(long num)
{
    if(num>100000)
        return ((num/1000) == (num/100));
    if(num>10000)
        return ((num/100) == (num/100));
    return 1;
}




int main(void)
{
    unsigned int num = 1000;
    unsigned int sum = 0;
    long i = 0;

    for(i=(1000*1000)-1;i>10000;i--){
        if(isok1st(i)&isok2nd(i)){
            printf ("%d\n",i);
        }
        
        if(isok1st(i)&&isok2nd(i)&&isok3rd(i)){
            printf ("%d\n",i);
        }
    }
    printf("max %d\n",sum);
    return 0;
}




