// . Given an integer X that can contain up to 20 digits, output ‘Prime’ if X is a prime or
// ‘Composite’ otherwise.

#include <bits/stdc++.h>


bool isPrime(long long x) {
    if (x < 2) {
        return false;  // Numbers less than 2 are not prime
    }

    for (long long i = 2; i <= std::sqrt(x); ++i) {
        if (x % i == 0) {
            return false;  // X is divisible by a number other than 1 and itself
        }
    }

    return true;  // X is prime
}

int main() {
    // Input: Integer X with up to 20 digits
    long long X;
    std::cout << "Enter an integer (up to 20 digits): ";
    std::cin >> X;

    // Check if X is prime or composite
    if (isPrime(X)) {
        std::cout << "Prime" << std::endl;
    } else {
        std::cout << "Composite" << std::endl;
    }

    return 0;
}
