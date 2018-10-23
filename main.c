#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "sieve.h"


int main() {
    //args do not work atm cause main thing doesn't work int argc, int argv[]
    printf("this is the 30th prime: %i\n", Sieve(30)); //works
    printf("this is the 10000th prime: %i\n", Sieve(10000)); //seg fault
}