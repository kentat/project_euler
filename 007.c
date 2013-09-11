#include <stdio.h>

/* 素数を小さい方から6つ並べると 2, 3, 5, 7, 11, 13 であり, 6番目の素数は 13 である. */
/*     10001番目の素数を求めよ. */

#define LASTID (10001)

long facts[LASTID];
int factnum = 0;

int isfact(long num)
{
    int i;
    for(i=0;i<LASTID;i++){
        if(facts[i] == 0){
            facts[i] = num;
            return 1;
        }else if( (num % facts[i]) == 0  ){
            return 0;
        }
    }
    return 0;
}

int islastfact(long num)
{
    if( isfact(num) ){
        factnum++;
        if( factnum == LASTID ){
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    long i = 0;

    for(i=0;i<=LASTID;i++)
        facts[i] = 0;

    for(i=2;i<=0xffffffff;i++){
        if(islastfact(i)){
            break;
        }
    }
    
    /* for(i=0;i<=LASTID;i++) */
    /*     printf("fact %d \n",facts[i]); */

    printf ("%d\n",facts[LASTID-1]);
    return 0;
}




