#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Method 1: Using temp variable
    temp = a; a = b; b = temp;
    printf("1. Temp Swap: a=%d b=%d\n", a, b);

    // Reset
    a = 5; b = 10;
    // Method 2: Arithmetic
    a = a + b; b = a - b; a = a - b;
    printf("2. Arithmetic: a=%d b=%d\n", a, b);

    // Reset
    a = 5; b = 10;
    // Method 3: Bitwise XOR
    a ^= b; b ^= a; a ^= b;
    printf("3. XOR: a=%d b=%d\n", a, b);

    // Method 4: Pointer
    int *p1 = &a, *p2 = &b;
    temp = *p1; *p1 = *p2; *p2 = temp;
    printf("4. Pointer: a=%d b=%d\n", a, b);

    return 0;
}
