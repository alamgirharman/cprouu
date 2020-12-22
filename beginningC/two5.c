#include <stdio.h>

int main(void) {
    int cookies = 5;
    int cookieCalories = 125;
    int totalEaten = 0;

    int eaten = 2;
    cookies = cookies - eaten;
    totalEaten = totalEaten + eaten;
    printf("\nI have eaten %d cookies. There are %d cookies left", eaten, cookies);

    eaten = 3;
    cookies = cookies - eaten;
    totalEaten = totalEaten + eaten;
    printf("\nI have eaten %d more. Now there are %d cookies left\n", eaten, cookies);
    printf("\nTotal energy consumed is %d calories.\n", totalEaten * cookieCalories);

    return 0;
}