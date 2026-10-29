#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("p holds: %p\n", (void*)p);

    *p = 20;
    printf("a is now: %d\n", a);
    return 0;
}