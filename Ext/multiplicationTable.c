#include <stdio.h>

int main() {

    int i = 1;

    while (i <= 10) {

        if (i <= 9) {
            printf(" %d = ", i);
        } else {
            printf("%d = ", i);
        }

        int j = 1;
        while (j <= 10) {
            int result = i * j;

            if (result <= 9) {
                printf(" %d ", result);
            } else {
                printf("%d ", result);
            }
            j++;
        }
        
        printf("\n");
        i++;
    }
    return 0;
}