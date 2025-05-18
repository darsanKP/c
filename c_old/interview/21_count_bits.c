#include <stdio.h>

int countBitsToFlip(int a, int b) {
    int xor_result = a ^ b;  // XOR the numbers
    int count = 0;

    // Count the number of 1s in the XOR result (bits to flip)
    while (xor_result) {
        count += xor_result & 1;  // If the LSB is 1, increment count
        xor_result >>= 1;         // Right shift to check the next bit
    }

    return count;
}

int main() {
    int a, b;

    printf("Enter two numbers (A and B):\n");
    scanf("%d %d", &a, &b);

    int result = countBitsToFlip(a, b);
    printf("Number of bits to flip to convert %d to %d: %d\n", a, b, result);

    return 0;
}

