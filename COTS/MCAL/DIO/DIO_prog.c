#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"


#include "DIO_private.h"
#include "DIO_interface.h"


void DIO_u8GetPinValue (u8 A_u8PortName , u8 A_u8PinNumber , u8 * A_u8PinValue)
{
    switch(A_u8PortName)
    {
        case  PORTA :   * A_u8PinValue = GET_BIT(PINA_REG, A_u8PinNumber);  break;
        case  PORTB :   * A_u8PinValue = GET_BIT(PINB_REG, A_u8PinNumber);  break;
        case  PORTC :   * A_u8PinValue = GET_BIT(PINC_REG, A_u8PinNumber);  break;
        case  PORTD :   * A_u8PinValue = GET_BIT(PIND_REG, A_u8PinNumber);  break;
        case  PORTE :   * A_u8PinValue = GET_BIT(PINE_REG, A_u8PinNumber);  break;
        case  PORTF :   * A_u8PinValue = GET_BIT(PINF_REG, A_u8PinNumber);  break;
        default : break;
    }
}

void DIO_u8GetPortValue (u8 A_u8PortName , u8 * A_u8PortValue )
{
    switch (A_u8PortName)
    {
        case PORTA : * A_u8PortValue = PINA_REG ; break;
        case PORTB : * A_u8PortValue = PINB_REG ; break;
        case PORTC : * A_u8PortValue = PINC_REG ; break;
        case PORTD : * A_u8PortValue = PIND_REG ; break;
        case PORTE : * A_u8PortValue = PINE_REG ; break;
        case PORTF : * A_u8PortValue = PINF_REG ; break;
        default : break;
    }
}


void DIO_voidSetPort_SpecificDirection (u8 A_u8PortName , u8 A_u8PortSpecificDirection)
{
    switch (A_u8PortName)
    {
        case PORTA :DDRA_REG =  A_u8PortName; break;
        case PORTB :DDRB_REG =  A_u8PortName; break;
        case PORTC :DDRC_REG =  A_u8PortName; break;
        case PORTD :DDRD_REG =  A_u8PortName; break;
        case PORTE :DDRE_REG =  A_u8PortName; break;
        case PORTF :DDRF_REG =  A_u8PortName; break;
        default : /* Do Nothing */ break;
    }
}

void DIO_voidSetPort_Output(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG = SET_PORT_OUTPUT ; break;
        case PORTB : DDRB_REG = SET_PORT_OUTPUT ; break;
        case PORTC : DDRC_REG = SET_PORT_OUTPUT ; break;
        case PORTD : DDRD_REG = SET_PORT_OUTPUT ; break;
        case PORTE : DDRE_REG = SET_PORT_OUTPUT ; break;
        case PORTF : DDRF_REG = SET_PORT_OUTPUT ; break;
        default : break ;
    }
}

void DIO_voidSetPort_Input(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG = SET_PORT_INPUT ; break;
        case PORTB : DDRB_REG = SET_PORT_INPUT ; break;
        case PORTC : DDRC_REG = SET_PORT_INPUT ; break;
        case PORTD : DDRD_REG = SET_PORT_INPUT ; break;
        case PORTE : DDRE_REG = SET_PORT_INPUT ; break;
        case PORTF : DDRF_REG = SET_PORT_INPUT ; break;
        default : break ;
    }
}

void DIO_voidSetHighNipple_Output(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG |= HIGH_NIPPLE ; break;
        case PORTB : DDRB_REG |= HIGH_NIPPLE ; break;
        case PORTC : DDRC_REG |= HIGH_NIPPLE ; break;
        case PORTD : DDRD_REG |= HIGH_NIPPLE ; break;
        case PORTE : DDRE_REG |= HIGH_NIPPLE ; break;
        case PORTF : DDRF_REG |= HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_Output(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG |= LOW_NIPPLE ; break;
        case PORTB : DDRB_REG |= LOW_NIPPLE ; break;
        case PORTC : DDRC_REG |= LOW_NIPPLE ; break;
        case PORTD : DDRD_REG |= LOW_NIPPLE ; break;
        case PORTE : DDRE_REG |= LOW_NIPPLE ; break;
        case PORTF : DDRF_REG |= LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetHighNipple_Input(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG &= ~HIGH_NIPPLE ; break;
        case PORTB : DDRB_REG &= ~HIGH_NIPPLE ; break;
        case PORTC : DDRC_REG &= ~HIGH_NIPPLE ; break;
        case PORTD : DDRD_REG &= ~HIGH_NIPPLE ; break;
        case PORTE : DDRE_REG &= ~HIGH_NIPPLE ; break;
        case PORTF : DDRF_REG &= ~HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_Input(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : DDRA_REG &= ~LOW_NIPPLE ; break;
        case PORTB : DDRB_REG &= ~LOW_NIPPLE ; break;
        case PORTC : DDRC_REG &= ~LOW_NIPPLE ; break;
        case PORTD : DDRD_REG &= ~LOW_NIPPLE ; break;
        case PORTE : DDRE_REG &= ~LOW_NIPPLE ; break;
        case PORTF : DDRF_REG &= ~LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetPin_Output (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA : SET_BIT( DDRA_REG , A_u8PinNumber ) ; break;
        case PORTB : SET_BIT( DDRB_REG , A_u8PinNumber ) ; break;
        case PORTC : SET_BIT( DDRC_REG , A_u8PinNumber ) ; break;
        case PORTD : SET_BIT( DDRD_REG , A_u8PinNumber ) ; break;
        case PORTE : SET_BIT( DDRE_REG , A_u8PinNumber ) ; break;
        case PORTF : SET_BIT( DDRF_REG , A_u8PinNumber ) ; break;
        default : break ;
    }
}

void DIO_voidSetPin_Input (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA : CLR_BIT( DDRA_REG , A_u8PinNumber ) ; break;
        case PORTB : CLR_BIT( DDRB_REG , A_u8PinNumber ) ; break;
        case PORTC : CLR_BIT( DDRC_REG , A_u8PinNumber ) ; break;
        case PORTD : CLR_BIT( DDRD_REG , A_u8PinNumber ) ; break;
        case PORTE : CLR_BIT( DDRE_REG , A_u8PinNumber ) ; break;
        case PORTF : CLR_BIT( DDRF_REG , A_u8PinNumber ) ; break;
        default : break ;
    }
}

void DIO_TogglePinDirection (u8 A_u8PortName , u8 A_u8PinNumber)
{
	switch (A_u8PortName)
	{
		case PORTA : TOGGLE_BIT(DDRA_REG , A_u8PinNumber );	break;
		case PORTB : TOGGLE_BIT(DDRB_REG , A_u8PinNumber );	break;
		case PORTC : TOGGLE_BIT(DDRC_REG , A_u8PinNumber );	break;
		case PORTD : TOGGLE_BIT(DDRD_REG , A_u8PinNumber );	break;
		case PORTE : TOGGLE_BIT(DDRE_REG , A_u8PinNumber );	break;
		case PORTF : TOGGLE_BIT(DDRF_REG , A_u8PinNumber );	break;
		default : break ;
	}
}

void DIO_voidSetPort_SpecificState (u8 A_u8PortName , u8 A_u8PorValue)
{
    switch (A_u8PortName)
    {
        case PORTA :PORTA_REG =  A_u8PorValue; break;
        case PORTB :PORTB_REG =  A_u8PorValue; break;
        case PORTC :PORTC_REG =  A_u8PorValue; break;
        case PORTD :PORTD_REG =  A_u8PorValue; break;
        case PORTE :PORTD_REG =  A_u8PorValue; break;
        case PORTF :PORTD_REG =  A_u8PorValue; break;
        default : /* Do Nothing */ break;
    }
}

void DIO_voidSetPort_High (u8 A_u8PortName )
{
    switch( A_u8PortName )
    {
        case PORTA : PORTA_REG = SET_PORT_HIGH ; break; 
        case PORTB : PORTB_REG = SET_PORT_HIGH ; break; 
        case PORTC : PORTC_REG = SET_PORT_HIGH ; break; 
        case PORTD : PORTD_REG = SET_PORT_HIGH ; break; 
        case PORTE : PORTE_REG = SET_PORT_HIGH ; break; 
        case PORTF : PORTF_REG = SET_PORT_HIGH ; break; 
        default : break ; 
    }
}

void DIO_voidSetPort_PULLUP (u8 A_u8PortName )
{
    switch( A_u8PortName )
    {
        case PORTA : PORTA_REG = SET_PORT_PULLUP ; break; 
        case PORTB : PORTB_REG = SET_PORT_PULLUP ; break; 
        case PORTC : PORTC_REG = SET_PORT_PULLUP ; break; 
        case PORTD : PORTD_REG = SET_PORT_PULLUP ; break; 
        case PORTE : PORTE_REG = SET_PORT_PULLUP ; break; 
        case PORTF : PORTF_REG = SET_PORT_PULLUP ; break; 
        default : break ; 
    }
}

void DIO_voidSetPin_High (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA : SET_BIT(PORTA_REG,A_u8PinNumber); break ; 
        case PORTB : SET_BIT(PORTB_REG,A_u8PinNumber); break ; 
        case PORTC : SET_BIT(PORTC_REG,A_u8PinNumber); break ; 
        case PORTD : SET_BIT(PORTD_REG,A_u8PinNumber); break ; 
        case PORTE : SET_BIT(PORTE_REG,A_u8PinNumber); break ; 
        case PORTF : SET_BIT(PORTF_REG,A_u8PinNumber); break ; 
        default : /* Do Nothing  */  break;
    }
}

void DIO_voidSetPort_Low (u8 A_u8PortName )
{
    switch( A_u8PortName )
    {
        case PORTA : PORTA_REG = SET_PORT_LOW ; break; 
        case PORTB : PORTB_REG = SET_PORT_LOW ; break; 
        case PORTC : PORTC_REG = SET_PORT_LOW ; break; 
        case PORTD : PORTD_REG = SET_PORT_LOW ; break; 
        case PORTE : PORTE_REG = SET_PORT_LOW ; break; 
        case PORTF : PORTF_REG = SET_PORT_LOW ; break; 
        default : break ; 
    }
}

void DIO_voidSetPort_Float (u8 A_u8PortName )
{
    switch( A_u8PortName )
    {
        case PORTA : PORTA_REG = SET_PORT_FLOAT ; break; 
        case PORTB : PORTB_REG = SET_PORT_FLOAT ; break; 
        case PORTC : PORTC_REG = SET_PORT_FLOAT ; break; 
        case PORTD : PORTD_REG = SET_PORT_FLOAT ; break; 
        case PORTE : PORTE_REG = SET_PORT_FLOAT ; break; 
        case PORTF : PORTF_REG = SET_PORT_FLOAT ; break; 
        default : break ; 
    }
}

void DIO_voidSetPin_Low (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA :  CLR_BIT(PORTA_REG,A_u8PinNumber); break ; 
        case PORTB :  CLR_BIT(PORTB_REG,A_u8PinNumber); break ; 
        case PORTC :  CLR_BIT(PORTC_REG,A_u8PinNumber); break ; 
        case PORTD :  CLR_BIT(PORTD_REG,A_u8PinNumber); break ; 
        case PORTE :  CLR_BIT(PORTE_REG,A_u8PinNumber); break ; 
        case PORTF :  CLR_BIT(PORTF_REG,A_u8PinNumber); break ; 
        default    : /* Do Nothing  */  break;
    }
}

void DIO_voidSetPin_Pullup (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA :  SET_BIT( PORTA_REG ,A_u8PinNumber);   break ; 
        case PORTB :  SET_BIT( PORTB_REG ,A_u8PinNumber);   break ; 
        case PORTC :  SET_BIT( PORTC_REG ,A_u8PinNumber);   break ; 
        case PORTD :  SET_BIT( PORTD_REG ,A_u8PinNumber);   break ; 
        case PORTE :  SET_BIT( PORTE_REG ,A_u8PinNumber);   break ; 
        case PORTF :  SET_BIT( PORTF_REG ,A_u8PinNumber);   break ; 
        default : /* Do Nothing  */  break;
    }
}

void DIO_voidSetPin_Float (u8 A_u8PortName , u8 A_u8PinNumber)
{
    switch (A_u8PortName)
    {
        case PORTA :  CLR_BIT( PORTA_REG ,A_u8PinNumber);   break ; 
        case PORTB :  CLR_BIT( PORTB_REG ,A_u8PinNumber);   break ; 
        case PORTC :  CLR_BIT( PORTC_REG ,A_u8PinNumber);   break ; 
        case PORTD :  CLR_BIT( PORTD_REG ,A_u8PinNumber);   break ; 
        case PORTE :  CLR_BIT( PORTE_REG ,A_u8PinNumber);   break ; 
        case PORTF :  CLR_BIT( PORTF_REG ,A_u8PinNumber);   break ; 
        default : /* Do Nothing  */  break;
    }
}

void DIO_voidSetHighNipple_High(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG |= HIGH_NIPPLE ; break;
        case PORTB : PORTB_REG |= HIGH_NIPPLE ; break;
        case PORTC : PORTC_REG |= HIGH_NIPPLE ; break;
        case PORTD : PORTD_REG |= HIGH_NIPPLE ; break;
        case PORTE : PORTE_REG |= HIGH_NIPPLE ; break;
        case PORTF : PORTF_REG |= HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_High(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG |= LOW_NIPPLE ; break;
        case PORTB : PORTB_REG |= LOW_NIPPLE ; break;
        case PORTC : PORTC_REG |= LOW_NIPPLE ; break;
        case PORTD : PORTD_REG |= LOW_NIPPLE ; break;
        case PORTE : PORTE_REG |= LOW_NIPPLE ; break;
        case PORTF : PORTF_REG |= LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetHighNipple_Low(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG &= ~HIGH_NIPPLE ; break;
        case PORTB : PORTB_REG &= ~HIGH_NIPPLE ; break;
        case PORTC : PORTC_REG &= ~HIGH_NIPPLE ; break;
        case PORTD : PORTD_REG &= ~HIGH_NIPPLE ; break;
        case PORTE : PORTE_REG &= ~HIGH_NIPPLE ; break;
        case PORTF : PORTF_REG &= ~HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_Low(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG &= ~LOW_NIPPLE ; break;
        case PORTB : PORTB_REG &= ~LOW_NIPPLE ; break;
        case PORTC : PORTC_REG &= ~LOW_NIPPLE ; break;
        case PORTD : PORTD_REG &= ~LOW_NIPPLE ; break;
        case PORTE : PORTE_REG &= ~LOW_NIPPLE ; break;
        case PORTF : PORTF_REG &= ~LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetHighNipple_Pullup(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG |= HIGH_NIPPLE ; break;
        case PORTB : PORTB_REG |= HIGH_NIPPLE ; break;
        case PORTC : PORTC_REG |= HIGH_NIPPLE ; break;
        case PORTD : PORTD_REG |= HIGH_NIPPLE ; break;
        case PORTE : PORTE_REG |= HIGH_NIPPLE ; break;
        case PORTF : PORTF_REG |= HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_Pullup(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG |= LOW_NIPPLE ; break;
        case PORTB : PORTB_REG |= LOW_NIPPLE ; break;
        case PORTC : PORTC_REG |= LOW_NIPPLE ; break;
        case PORTD : PORTD_REG |= LOW_NIPPLE ; break;
        case PORTE : PORTE_REG |= LOW_NIPPLE ; break;
        case PORTF : PORTF_REG |= LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetHighNipple_Float(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG &= ~HIGH_NIPPLE ; break;
        case PORTB : PORTB_REG &= ~HIGH_NIPPLE ; break;
        case PORTC : PORTC_REG &= ~HIGH_NIPPLE ; break;
        case PORTD : PORTD_REG &= ~HIGH_NIPPLE ; break;
        case PORTE : PORTE_REG &= ~HIGH_NIPPLE ; break;
        case PORTF : PORTF_REG &= ~HIGH_NIPPLE ; break;
        default : break ;
    }
}

void DIO_voidSetLowNipple_Float(u8 A_u8PortName)
{
    switch (A_u8PortName)
    {
        case PORTA : PORTA_REG &= ~LOW_NIPPLE ; break;
        case PORTB : PORTB_REG &= ~LOW_NIPPLE ; break;
        case PORTC : PORTC_REG &= ~LOW_NIPPLE ; break;
        case PORTD : PORTD_REG &= ~LOW_NIPPLE ; break;
        case PORTE : PORTE_REG &= ~LOW_NIPPLE ; break;
        case PORTF : PORTF_REG &= ~LOW_NIPPLE ; break;
        default : break ;
    }
}

void DIO_TogglePinState (u8 A_u8PortName , u8 A_u8PinNumber)
{
	switch (A_u8PortName)
	{
		case PORTA :	TOGGLE_BIT(PORTA_REG , A_u8PinNumber );	break;
		case PORTB :	TOGGLE_BIT(PORTB_REG , A_u8PinNumber );	break;
		case PORTC :	TOGGLE_BIT(PORTC_REG , A_u8PinNumber );	break;
		case PORTD :	TOGGLE_BIT(PORTD_REG , A_u8PinNumber );	break;
		case PORTE :	TOGGLE_BIT(PORTE_REG , A_u8PinNumber );	break;
		case PORTF :	TOGGLE_BIT(PORTF_REG , A_u8PinNumber );	break;
		default : break ;
	}
}
