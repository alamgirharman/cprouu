#include <stdio.h>

int main() {
    int remainder, quotient;
    int number = 120;

    // quotient = (number / 2);
    // remainder = number - (quotient * 2);


    remainder = number - ((number / 2) * 2);

    printf("Remainder is: %d\n", remainder);
    
    return 0;
}