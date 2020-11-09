#include <stdio.h>

int main() {

    int n, i, result;

    n = 4;

    if(n < 2) {
        result = 0;
    } 

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            result = 1;
        }
    }

    if(1 == result) {
        printf("%d is not in list or not a prime number", n);
    } else {
        printf("%d is a prime number", n);
    }
    

    return 0;
}