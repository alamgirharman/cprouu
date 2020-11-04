#include <stdio.h>

int main() {

    int range = 10, i;
    int first_number = 0, second_number = 1, third_number;
    if (range < 0)
    {
        printf("Invalid Input");
    }
    else if (range == 0)
    {
        printf("%d", first_number);
    }
    else if (range == 1)
    {
        printf("%d", second_number);
    }
    else
    {
        for (i=2; i<=range; i++)
        {
            third_number = first_number + second_number;
            first_number = second_number;
            second_number = third_number;
        }
        printf("%d", second_number);
    }

    return 0;
}