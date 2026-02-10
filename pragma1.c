#include <stdio.h>
#include <stdint.h>
#pragma pack(1)  // Comment this line to see padding effect
struct A {
    char c;  // 1 byte
        int i;  // 4 bytes
        char d;
    };
int main() {
	int j;
    struct A a = {'A',0x12345678,'C'};
    // Get the raw bytes using unsigned char*
    unsigned char *ptr = (unsigned char*)&a;
    printf("Size of struct A: %lu bytes\n", sizeof(a));
    printf("Byte-by-byte memory layout:\n");
    for ( j = 0; j < sizeof(a); j++) {
        printf("Byte %2d: 0x%02X\n", j, ptr[j]);
    }
    return 0;}