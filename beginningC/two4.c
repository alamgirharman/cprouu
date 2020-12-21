#include <stdio.h>

int main(void) {
    int totalPets;
    int cats;
    int dogs;
    int ponies;
    int others;

    // Set the number of each kind of pet
    cats = 2;
    dogs = 1;
    ponies = 1;
    others = 46;

    // Calculate the total number of pets
    totalPets = cats + dogs + ponies + others;

    printf("We have %d pets in total\n", totalPets);

    return 0;
}