#include <stdio.h>

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.


void main(void)
{
    unsigned int num = 1000;
    unsigned int sum = 0;
        
    while(--num)
        {
            if( (num%3) && (num%5) ) continue;
            sum += num;
        }
    printf("answer is %d\n",sum);
}




