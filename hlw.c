// WAP to print whether a number is divisible by 3 or not and whether it is even or not.
#include <stdio.h>

int main() {
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("Number is even\n");
        if (a % 3 == 0) {
            printf("The number is divisible by 3\n");
        } else {
            printf("The number is not divisible by 3\n");
        }
    } else {
        printf("Number is odd\n");
        if (a % 3 == 0) {
            printf("The number is divisible by 3\n");
        } else {
            printf("The number is not divisible by 3\n");
        }
    }

    return 0;
}