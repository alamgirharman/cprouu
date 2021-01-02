#include <stdio.h>

int main() {
    int a, b, c;
    for(a = 1; a <= 3; a++) {
        for(c = 1; c <= 3; c++) {
            printf("%d, %d, %d\n", a, b, c);
        }
    }
}