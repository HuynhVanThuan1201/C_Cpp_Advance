#include <stdio.h>
#include <math.h>

int main() {
    unsigned int x = 10;
    unsigned int a = 5, b = 7;
    unsigned int n = 4;
    int msb = 0, lsb = 0;

    printf("Giá trị ban đầu: x = %u, a = %u, b = %u, n = %u\n\n", x, a, b, n);

    // 1. Bật bit thứ n của x
    x |= (1 << n);
    printf("1. Sau khi bật bit %u: x = %u\n", n, x);

    // 2. Tắt bit thứ n của x
    x &= ~(1 << n);
    printf("2. Sau khi tắt bit %u: x = %u\n", n, x);

    // 3. Đảo bit thứ n của x
    x ^= (1 << n);
    printf("3. Sau khi đảo bit %u: x = %u\n", n, x);

    // 4. Kiểm tra bit thứ n có bật không
    printf("4. Bit %u của x %s\n", n, (x & (1 << n)) ? "bật" : "tắt");

    // 5. Hoán đổi 2 số a và b không dùng biến tạm
    printf("5. Trước khi swap: a = %u, b = %u\n", a, b);
    a = a ^ b; b = a ^ b; a = a ^ b;
    printf("   Sau khi swap: a = %u, b = %u\n", a, b);

    // 6. Kiểm tra n có phải lũy thừa của 2 không
    printf("6. %u %s lũy thừa của 2\n", n, ((n > 0 && (n & (n - 1)) == 0) ? "là" : "không phải"));

    // 7. Kiểm tra n chẵn hay lẻ
    printf("7. %u là số %s\n", n, (n & 1) ? "lẻ" : "chẵn");

    // 8. Lấy bù 2 (two’s complement) của n
    printf("8. Bù 2 của %u là %d\n", n, (~n) + 1);

    // 9. Kiểm tra a và b có bằng nhau không (không dùng ==)
    printf("9. a và b %s nhau\n", ((a ^ b) == 0) ? "bằng" : "không bằng");

    // 10. Tìm vị trí bit 1 cao nhất (MSB)
    msb = (int)log2(n);
    printf("10. Vị trí bit 1 cao nhất (MSB) của %u là %d\n", n, msb);

    // 11. Tìm vị trí bit 1 thấp nhất (LSB)
#if defined(__GNUC__)
    lsb = __builtin_ctz(n);  // GCC/Clang
#else
    lsb = (int)log2(n & -n);
#endif
    printf("11. Vị trí bit 1 thấp nhất (LSB) của %u là %d\n", n, lsb);

    // 12. Tắt bit 1 ở ngoài cùng bên phải của n
    printf("12. Trước khi tắt bit 1 phải: n = %u\n", n);
    n = n & (n - 1);
    printf("    Sau khi tắt bit 1 phải: n = %u\n", n);

    // 13. Cô lập bit 1 ở ngoài cùng bên phải của n
    n = 18; // 10010
    printf("13. Cô lập bit 1 ngoài cùng bên phải của 18: %u\n", n & (-n));

    // 14. Kiểm tra n có phải bội của 8 không
    n = 24;
    printf("14. %u %s là bội của 8\n", n, ((n % 8 == 0) ? "là" : "không phải"));

    return 0;
}
