#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(reg , bit) (reg |= 1<<bit)
#define CLR_BIT(reg , bit) (reg &= ~(1<<bit))
#define GET_BIT(reg , bit) ((reg>>bit)&1)
#define TOGGLE_BIT(reg , bit) (reg ^= 1<<bit)


#define GET_LOW_NIBBLE(reg) reg&0x0F
#define GET_HIGH_NIBBLE(reg)(reg>>4) & 0b00001111
#define GET_PORT(reg) reg&0FF
#define TGL_PORT(reg) reg^=0xFF

#endif
