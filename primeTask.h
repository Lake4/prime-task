#include <math.h>
#include <stdio.h>


//return 0 if the number is not a prime; return 1 if the number is a prime
int isPrime(unsigned long long number) {
    unsigned long long end = sqrt(number);

    if (number % 2 == 0) {
        return 0;
    }

    for (unsigned long long i = 3 ; i<=end ; i = i+2) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}


unsigned long long findPrime(unsigned long long start) {
    unsigned long long end = start*10-1;

    //only check uneven numbers; if the starting number is even, add 1
    if (start % 2 == 0) {
        start++;
    }

    for (unsigned long long i = 0 ; i<end ; i = i+2) {
        if (isPrime(start+i)) {
            return start+i;
        }
    }

    //return 0 if no prime number is found
    return 0;
}


void print15Digits(unsigned long long number) {
    char buffer[21];
    sprintf(buffer,"%llu",number);

    for (int i = 5 ; i < 21-1 ; i++) {
        printf("%c",buffer[i]);
    }
}

