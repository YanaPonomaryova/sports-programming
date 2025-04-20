#include <stdio.h>

int main() {
    int originalPrice = 450;
    int discountedPrice = originalPrice - (originalPrice * 15 / 100);
    printf("Discounted price: %d UAH\n", discountedPrice);
    return 0;
}

