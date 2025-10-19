#include <stdio.h>
#include <math.h>

/*
 * File: bitwise.c
 * Description:
 *   This program demonstrates common bitwise operations in C,
 *   such as setting, clearing, toggling, and checking bits,
 *   as well as identifying MSB/LSB and bit manipulation tricks.
 */

int main() {
    unsigned int x = 10;   // Example value: 1010 (binary)
    unsigned int a = 5, b = 7;
    unsigned int n = 4;
    int msb = 0, lsb = 0;

    printf("Initial values: x = %u, a = %u, b = %u, n = %u\n\n", x, a, b, n);

    // 1. Set the nth bit of x
    x |= (1 << n);
    printf("1. After setting bit %u: x = %u\n", n, x);

    // 2. Clear the nth bit of x
    x &= ~(1 << n);
    printf("2. After clearing bit %u: x = %u\n", n, x);

    // 3. Toggle the nth bit of x
    x ^= (1 << n);
    printf("3. After toggling bit %u: x = %u\n", n, x);

    // 4. Check if the nth bit is set
    printf("4. Bit %u of x is %s\n", n, (x & (1 << n)) ? "ON" : "OFF");

    // 5. Swap two numbers without using a temporary variable
    printf("5. Before swap: a = %u, b = %u\n", a, b);
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b;
    printf("   After swap: a = %u, b = %u\n", a, b);

    // 6. Check if n is a power of 2
    printf("6. %u is %s a power of 2\n", n, ((n > 0 && (n & (n - 1)) == 0) ? "" : "not"));

    // 7. Check if n is even or odd
    printf("7. %u is %s\n", n, (n & 1) ? "odd" : "even");

    // 8. Get the two’s complement of n
    printf("8. Two’s complement of %u is %d\n", n, (~n) + 1);

    // 9. Check if a and b are equal without using ==
    printf("9. a and b are %sequal\n", ((a ^ b) == 0) ? "" : "not ");

    // 10. Find the position of the Most Significant Bit (MSB)
    msb = (int)log2(n);
    printf("10. MSB position of %u is %d\n", n, msb);

    // 11. Find the position of the Least Significant Bit (LSB)
#if defined(__GNUC__)
    lsb = __builtin_ctz(n);  // Works with GCC/Clang
#else
    lsb = (int)log2(n & -n); // Alternative method
#endif
    printf("11. LSB position of %u is %d\n", n, lsb);

    // 12. Clear the rightmost set bit of n
    printf("12. Before clearing rightmost set bit: n = %u\n", n);
    n = n & (n - 1);
    printf("    After clearing rightmost set bit: n = %u\n", n);

    // 13. Isolate the rightmost set bit of n
    n = 18; // Binary: 10010
    printf("13. Rightmost set bit of 18 isolated: %u\n", n & (-n));

    // 14. Check if n is a multiple of 8
    n = 24;
    printf("14. %u is %sa multiple of 8\n", n, ((n % 8 == 0) ? "" : "not "));

    return 0;
}
