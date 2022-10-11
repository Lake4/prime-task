#include "primeTask.h"

int main() {

    //give 10 and 11 digit numbers for starting points of finding prime numbers
    long long first10digPrime = findPrime(1000000000);
    long long first11digPrime = findPrime(10000000000);

    long long product = first10digPrime*first11digPrime;
    print15Digits(product);

    return 0;
}

