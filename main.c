#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isLittleEndian() {
    uint16_t x = 0x0001;
    uint8_t *p = (uint8_t *) &x;
    return (*p == 0x01);
}

int main() {

    uint8_t data[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
        
    printf("Hello, World!\n");
    return 0;
}