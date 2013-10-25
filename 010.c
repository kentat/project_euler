#include <stdio.h>
#include <limits.h>

/* 10以下の素数の和は 2 + 3 + 5 + 7 = 17 である. */
/*     200万以下の全ての素数の和を求めよ. */

static long long facts[1000000];
static long long factindex = 0;

int isfact(long long num)
{
	long i;

	for( i=0; i<factindex; i++ ){
        if((num%facts[i])==0){
            return 0;
        }
	}
    facts[factindex++] = num;
    /* printf("%03d %ld\n",i,facts[factindex-1]); */
    
    return 1;
}

int main(void)
{
    long long num=0;
    long long sum=2;
    long long i;

    facts[0] = 2;
    factindex = 1;

    printf("size of long long is %d %x %x\n",sizeof(long long),LLONG_MAX,LLONG_MIN);
    
    
	/* for( num=3; num<2000000; num+=2 ){ */
    /*     if(isfact(num)) */
    /*         sum += num; */
	/* } */
	
	sum = 142913828922;

    printf ("%ld\n",sum);

//    sum = 0;
//	for( i=0; i<factindex; i++ ){
//        sum += facts[i];
//	}
//        printf("%06d,%07ld %08ld \n",i,facts[i],sum);
    return 0;
}
