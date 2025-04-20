#include <stdio.h>

int main() {
    int birthYear, currentYear = 2025;
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Your age: %d\n", currentYear - birthYear);
    return 0;
}
