#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input lengths of sides
    printf("Enter the length of side 1: ");
    scanf("%d", &side1);
    printf("Enter the length of side 2: ");
    scanf("%d", &side2);
    printf("Enter the length of side 3: ");
    scanf("%d", &side3);

    // Check the type of triangle
    if (side1 == side2 && side2 == side3) {
        printf("It's an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It's an isosceles triangle.\n");
    } else {
        printf("It's a scalene triangle.\n");
    }

    return 0;
}

