#include <stdio.h>

#define SET_BIT(reg, n)    ((reg) |=  (1U << (n)))
#define CLEAR_BIT(reg, n)  ((reg) &= ~(1U << (n)))
#define TOGGLE_BIT(reg, n) ((reg) ^=  (1U << (n)))

void print_bits(unsigned char x) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char reg = 0;

    printf("Start:        "); print_bits(reg);

    SET_BIT(reg, 3);
    printf("Set bit 3:    "); print_bits(reg);

    SET_BIT(reg, 5);
    printf("Set bit 5:    "); print_bits(reg);

    CLEAR_BIT(reg, 5);
    printf("Clear bit 5:  "); print_bits(reg);

    TOGGLE_BIT(reg, 0);
    printf("Toggle bit 0: "); print_bits(reg);

    TOGGLE_BIT(reg, 0);
    printf("Toggle again: "); print_bits(reg);

    return 0;
}