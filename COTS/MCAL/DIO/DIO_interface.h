#ifndef     DIO_INTERFACE_H
#define     DIO_INTERFACE_H

typedef enum
{ 
    PORTA ,
    PORTB ,
    PORTC ,
    PORTD ,
    PORTE ,
    PORTF 
}PortNameOptions;

typedef enum
{
    PIN0 ,
    PIN1 ,
    PIN2 ,
    PIN3 ,
    PIN4 ,
    PIN5 ,
    PIN6 ,
    PIN7 
}PinNumberOptions;

/*=======================================================================================================================*/
/*                                                  PORT CONFIGURATION & APIS                                            */
/*=======================================================================================================================*/

/*
* SET PORT DIRECTION * 
* Port Directions       => OUTPUT - INPUT - SPECIFIC DIRECTION 
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF  
*/
void DIO_voidSetPort_SpecificDirection (u8 A_u8PortName , u8 A_u8PortSpecificDirection);
void DIO_voidSetPort_Output(u8 A_u8PortName);
void DIO_voidSetPort_Input(u8 A_u8PortName);
/*
* SET PORT STATE * 
* PORT states           => HIGH - LOW - PULLUP - FLOAT - SPECIFIC STATE 
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF   
*/
void DIO_voidSetPort_SpecificState (u8 A_u8PortName , u8 A_u8PortSpecificState);
void DIO_voidSetPort_High (u8 A_u8PortName );
void DIO_voidSetPort_Low (u8 A_u8PortName );
void DIO_voidSetPort_Pullup (u8 A_u8PortName);
void DIO_voidSetPort_Float (u8 A_u8PortName);
/*
* Get Port Value
*/
void DIO_u8GetPortValue (u8 A_u8PortName , u8 * A_u8PortValue );


/*=======================================================================================================================*/
/*                                               NIPPLE CONFIGURATION & APIS                                             */
/*=======================================================================================================================*/

/*
* SET NIPPLE DIRECTION * 
* Nipple Directions     => OUTPUT - INPUT - SPECIFIC DIRECTION 
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF  
*/
void DIO_voidSetHighNipple_Output(u8 A_u8PortName);
void DIO_voidSetLowNipple_Output(u8 A_u8PortName);
void DIO_voidSetHighNipple_Input(u8 A_u8PortName);
void DIO_voidSetLowNipple_Input(u8 A_u8PortName);
/*
* SET NIPPLE STATE * 
* Nipple STATES         => HIGH - LOW - PULLUP - FLOAT
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF  
*/
void DIO_voidSetHighNipple_High(u8 A_u8PortName);
void DIO_voidSetLowNipple_High(u8 A_u8PortName);
void DIO_voidSetHighNipple_Low(u8 A_u8PortName);
void DIO_voidSetLowNipple_Low(u8 A_u8PortName);
void DIO_voidSetHighNipple_Pullup(u8 A_u8PortName);
void DIO_voidSetLowNipple_Pullup(u8 A_u8PortName);
void DIO_voidSetHighNipple_Float(u8 A_u8PortName);
void DIO_voidSetLowNipple_Float(u8 A_u8PortName);



/*=======================================================================================================================*/
/*                                                  PIN CONFIGURATION & APIS                                             */
/*=======================================================================================================================*/

/*
* SET PIN DIRECTION * 
* Pin Directions        => OUTPUT - INPUT -- TOGGLE DIRECTION 
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF  
- A_u8PinNumber oPTIONS => [ PIN0 -> PIN7 ]
*/
void DIO_voidSetPin_Output (u8 A_u8PortName , u8 A_u8PinNumber);
void DIO_voidSetPin_Input (u8 A_u8PortName , u8 A_u8PinNumber);
void DIO_TogglePinDirection (u8 A_u8PortName , u8 A_u8PinNumber);
/*
* SET PIN STATE * 
* Pin STATES            => HIGH - LOW - PULLUP - FLOAT
* A_u8PortName Options  => PORTA - PORTB - PORTC - PORTD - PORTE - PORTF  
- A_u8PinNumber oPTIONS => [ PIN0 -> PIN7 ]
*/
void DIO_voidSetPin_High (u8 A_u8PortName , u8 A_u8PinNumber);
void DIO_voidSetPin_Low (u8 A_u8PortName , u8 A_u8PinNumber);
void DIO_voidSetPin_Pullup (u8 A_u8PortName , u8 A_u8PinNumber);
void DIO_voidSetPin_Float (u8 A_u8PortName , u8 A_u8PinNumber);
/*
* Get Pin Value
*/
void DIO_u8GetPinValue (u8 A_u8PortName , u8 A_u8PinNumber , u8 * A_u8PinValue);
/*
* TOGGLE PIN STATE
*/
void DIO_TogglePinState (u8 A_u8PortName , u8 A_u8PinNumber);



#endif