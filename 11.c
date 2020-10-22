#include <stdio.h>

int main() {

    char myCh;

    scanf("%c", &myCh);

    if (myCh == 'a' || myCh == 'e' || myCh == 'i' || myCh == 'o' || myCh == 'u' || myCh == 'A' || myCh == 'E' || myCh == 'I' || myCh == 'O' || myCh == 'U') {
        printf("%c is vowel", myCh);
    } else if(myCh >= 'a' && myCh <= 'z' || myCh >= 'A' && myCh <= 'Z') {
        printf("%c is consonant", myCh);
    } else {
        printf("The character you input is unknown character");
    }



    return 0;
}