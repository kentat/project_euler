#include <stdio.h>

/* # 13195 の素因数は 5, 7, 13, 29 である. */
/* # 600851475143 の素因数のうち最大のものを求めよ. */

int main(void)
{
    long long int num = 600851475143;
    long long int i   = 0;

    for(i=2;i<num;i++){
        if(num%2 == 0)
            continue;
        if(num%i == 0)
            num /= i
            
    }
    printf("%d\n",i);
    return 0;
}
