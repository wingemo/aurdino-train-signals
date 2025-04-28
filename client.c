// DDRD - Data Direction Register for PORTD
// Adress: 0x2A (bin: 00101010)
#define DDRD_REG (*(volatile uint8_t*)0x2A)

// PORTD - Data Register for PORTD
// Adress: 0x2B (bin: 00101011)
#define PORTD_REG (*(volatile uint8_t*)0x2B)

void initialize() {
    // Set pin 1 (bit 1) as output
    // Set pin 2 (bit 2) as output
    // By OR-ing 0b00000110 (bit 1 and bit 2) into DDRD
    DDRD_REG |= (1 << 1) | (1 << 2);

     // Set the output LOW at startup
    PORTD_REG &= ~((1 << 1) | (1 << 2)); // Set pin 1 and 2 LOW
}
