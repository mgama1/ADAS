#ifndef      DIO_PRIVATE_H
#define      DIO_PRIVATE_H

/* Registers Addresses */
#define      PORTA_REG       *((volatile  u8*)0x3B)
#define      DDRA_REG        *((volatile  u8*)0x3A)
#define      PINA_REG        *((volatile  u8*)0x39)

#define      PORTB_REG       *((volatile  u8*)0x38)
#define      DDRB_REG        *((volatile  u8*)0x37)
#define      PINB_REG        *((volatile  u8*)0x36)

#define      PORTC_REG       *((volatile  u8*)0x35)
#define      DDRC_REG        *((volatile  u8*)0x34)
#define      PINC_REG        *((volatile  u8*)0x33)

#define      PORTD_REG       *((volatile  u8*)0x32)
#define      DDRD_REG        *((volatile  u8*)0x31)
#define      PIND_REG        *((volatile  u8*)0x30)

#define      PORTE_REG       *((volatile  u8*)0x23)
#define      DDRE_REG        *((volatile  u8*)0x22)
#define      PINE_REG        *((volatile  u8*)0x21)

#define      PORTF_REG       *((volatile  u8*)0x62)
#define      DDRF_REG        *((volatile  u8*)0x61)
#define      PINF_REG        *((volatile  u8*)0x20)

/* Used Macros */
#define SET_PORT_OUTPUT     0xFF
#define SET_PORT_PULLUP     0xFF
#define SET_PORT_HIGH       0xFF
#define SET_PORT_INPUT      0x00
#define SET_PORT_FLOAT      0x00
#define SET_PORT_LOW        0x00
#define HIGH_NIPPLE         0xF0
#define LOW_NIPPLE          0x0F


#endif
