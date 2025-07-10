#include <math.h>
#include <stdio.h>
#include <time.h>

int frequency_of_primes(int n)
{
    // This function checks the number of
    // primes less than the given parameter
    int i, j;
    int freq = n - 1;
    for (i = 2; i <= n; ++i)
        for (j = sqrt(i); j > 1; --j)
            if (i % j == 0) {
                --freq;
                break;
            }
    return freq;
}

int main()
{
    clock_t t;
    int f;
    t = clock();
    f = frequency_of_primes(9999);
    printf("The number of primes lower"
           " than 10, 000 is: %d\n",
           f);
    t = clock() - t;
    printf("No. of clicks %ld clicks (%f seconds).\n",
           t, ((float)t) / CLOCKS_PER_SEC);
    return 0;
}