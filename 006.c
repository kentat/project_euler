#include <stdio.h>

/* 最初の10個の自然数について, その二乗の和は, */
/*     12 + 22 + ... + 102 = 385 */
/*     最初の10個の自然数について, その和の二乗は, */
/*     (1 + 2 + ... + 10)2 = 3025 */
/*     これらの数の差は 3025 - 385 = 2640 となる. */
/*     同様にして, 最初の100個の自然数について二乗の和と和の二乗の差を求めよ. */

/* The sum of the squares of the first ten natural numbers is, */
/*     12 + 22 + ... + 102 = 385 */
/*     The square of the sum of the first ten natural numbers is, */
/*     (1 + 2 + ... + 10)2 = 552 = 3025 */
/*     Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640. */
/*     Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

int main(void)
{
    int i = 0;
    int sum = 0;
    int sumofsquare = 0;
    int squareofsum = 0;

    for(i=1;i<=100;i++){
        sumofsquare += i*i;
    }
    
    for(i=1;i<=100;i++){
        sum += i;
    }
    squareofsum = sum*sum;

    printf ("%d\n",squareofsum-sumofsquare);
    return 0;
}




