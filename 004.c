#include <stdio.h>

/* 左右どちらから読んでも同じ値になる数を回文数という. 2桁の数の積で表される回文数のうち, 最大のものは 9009 = 91 × 99 である. */
/*     では, 3桁の数の積で表される回文数の最大値を求めよ. */

<<<<<<< HEAD
int get_maxdigit(int num)
{
    if(num>1000000)
        return 1000000;
    if(num>100000)
        return 100000;
    if(num>10000)
        return 10000;
    if(num>1000)
        return 1000;
    if(num>100)
        return 100;
    if(num>10)
        return 10;
    return 1;
}

int isProduct(long num)
{
    long i = 0;
    long j = 0;

    for( i=999; i >= 100; i-- ){
        for( j=999; j >= 100; j-- ){
            if((i*j) < num)
                break;
            if((i*j) == num)
                return 1;
        }
    }
    return 0;
}


int main(void)
{
    long num = (999*999);
    int high = 0;
    
    while(num-- >10000){
        high = get_maxdigit(num);
        if(((num/high)%10) != (num/1)%10)
            continue;
        high /= 10;
        if(((num/high)%10) != (num/10)%10)
            continue;
        high /= 10;
        if(((num/high)%10) != (num/100)%10)
            continue;
        if(isProduct(num))
            break;
    }
    printf ("%d\n",num);
=======



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
>>>>>>> c4df653cbcf02b4554f0b30f4b2647fbfcf89bb9
    return 0;
}




