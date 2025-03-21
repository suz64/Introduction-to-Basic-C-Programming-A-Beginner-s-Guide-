#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Determine the smallest number
    if (a < b && a < c) {
        printf("A is the smallest\n");
    } else if (b < c) {
        printf("B is the smallest\n");
    } else {
        printf("C is the smallest\n");
    }

    return 0;
}