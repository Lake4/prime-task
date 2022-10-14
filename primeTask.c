#include "primes.h"

int main() {

    //give 10 and 11 digit numbers for starting points of finding prime numbers
    unsigned long long first10digPrime = findPrime(1000000000);
    unsigned long long first11digPrime = findPrime(10000000000);

    unsigned long long product = first10digPrime*first11digPrime;
    print15Digits(product);

    return 0;
}

