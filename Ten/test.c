#include <stdio.h>

int main() {

    char myChar = 'C';

    int i, j, k;
    char result;

    for(i = 0; i < 13; i++) {
        if(i = 0) {
            result = "";
            for(j = 0; j < 6; j++) {
                result = result + myChar;
            }
        }
    }


    printf("%c\n", result);

    return 0;
}