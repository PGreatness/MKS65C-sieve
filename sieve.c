#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"
#include "main.h"
/*Doesn't work
int sieve(int number) {
    int primeCount = 1;
    int retNumber = 1;
    int primes[100 * number];
    for (int i = 0; i < 2 * number; i++) {
        primes[i] = 1;
    }

    for (int i = 2; primeCount < number && i <= 100 * number; i++) {
        if (primes[i] == 1) {
            primeCount++;
            for (int w = i * 2; w <= 100 * number; w += i) {
                primes[w] = 0;
            }
        }
    }

    for (int i = 2; i < 100 * number; i++) {
        if (primes[i]) {
            printf("%i\n", i);
            retNumber = i;
        }
    }
    if (primeCount < number) {
        printf("Too small");
    }
    return retNumber;
}
*/
int Sieve(int number) {
    int retNum = 1;
    int num_of_primes = 0;
    long searchNum = number * number;
    int primes[searchNum];
    for (int i = 0; i < searchNum; i++) {
        primes[i] = 1;
    }

    for (int i = 2; num_of_primes <= number && i <= searchNum; i++) {
        if (primes[i]) {
            num_of_primes++;
            for (int w = 2 * i; w < searchNum; w += i) {
                primes[w] = 0;
            }
        }else{
            continue;
        }
    }
    int primeCount = 1;
    for (int a = 1; a < searchNum && primeCount <= num_of_primes; a++) {
        if (primes[a]) {
            primeCount++;
            retNum = a;
            printf("This is a prime: %i\n", a);
        }
    }
    return retNum;
}
