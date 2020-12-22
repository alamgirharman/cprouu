#include <stdio.h>

int main() {
    int cookies = 45;
    int children = 7;
    int cookiesPerChild = 0;
    int cookiesLeftOver = 0;

    // Calculate how many cookies each child gets when they are divided up
    cookiesPerChild = cookies / children;
    printf("You have %d children and %d cookies\n", children, cookies);
    printf("Give each child %d cookies.\n", cookiesPerChild);

    // Calculate how many cookies are left over
    cookiesLeftOver = cookies % children;
    printf("There are %d cookies left over.\n", cookiesLeftOver);
    return 0;
}