#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}


int main() {
    unsigned char original = 0b10101100; // Example input
    unsigned char swapped = swap_bits(original);

    printf("Original: 0x%02X (binary: ", original);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (original >> i) & 1);
    }
    printf(")\n");

    printf("Swapped: 0x%02X (binary: ", swapped);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (swapped >> i) & 1);
    }
    printf(")\n");

    return 0;
}
