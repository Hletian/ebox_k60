#include  "../ebox/ebox.h"

Gpio pb21(GPIOB,PORTB,21);
Gpio pb22(GPIOB,PORTB,22);
Gpio pa6(GPIOA,PORTA,6);
Gpio pc3(GPIOC,PORTC,3);


Gpio PA0(GPIOA, PORTA,0);
Gpio PA1(GPIOA, PORTA,1);
Gpio PA2(GPIOA, PORTA,2);
Gpio PA3(GPIOA, PORTA,3);
Gpio PA4(GPIOA, PORTA,4);
Gpio PA5(GPIOA, PORTA,5);
Gpio PA6(GPIOA, PORTA,6);
Gpio PA7(GPIOA, PORTA,7);
Gpio PA8(GPIOA, PORTA,8);
Gpio PA9(GPIOA, PORTA,9);
Gpio PA10(GPIOA, PORTA,10);
Gpio PA11(GPIOA, PORTA,11);
Gpio PA12(GPIOA, PORTA,12);
Gpio PA13(GPIOA, PORTA,13);
Gpio PA14(GPIOA, PORTA,14);
Gpio PA15(GPIOA, PORTA,15);
Gpio PA16(GPIOA, PORTA,16);
Gpio PA17(GPIOA, PORTA,17);
Gpio PA18(GPIOA, PORTA,18);
Gpio PA19(GPIOA, PORTA,19);
Gpio PA20(GPIOA, PORTA,20);
Gpio PA21(GPIOA, PORTA,21);
Gpio PA22(GPIOA, PORTA,22);
Gpio PA23(GPIOA, PORTA,23);
Gpio PA24(GPIOA, PORTA,24);
Gpio PA25(GPIOA, PORTA,25);
Gpio PA26(GPIOA, PORTA,26);
Gpio PA27(GPIOA, PORTA,27);
Gpio PA28(GPIOA, PORTA,28);
Gpio PA29(GPIOA, PORTA,29);
Gpio PA30(GPIOA, PORTA,30);
Gpio PA31(GPIOA, PORTA,31);


Gpio PB0(GPIOB, PORTB,0);
Gpio PB1(GPIOB, PORTB,1);
Gpio PB2(GPIOB, PORTB,2);
Gpio PB3(GPIOB, PORTB,3);
Gpio PB4(GPIOB, PORTB,4);
Gpio PB5(GPIOB, PORTB,5);
Gpio PB6(GPIOB, PORTB,6);
Gpio PB7(GPIOB, PORTB,7);
Gpio PB8(GPIOB, PORTB,8);
Gpio PB9(GPIOB, PORTB,9);
Gpio PB10(GPIOB, PORTB,10);
Gpio PB11(GPIOB, PORTB,11);
Gpio PB12(GPIOB, PORTB,12);
Gpio PB13(GPIOB, PORTB,13);
Gpio PB14(GPIOB, PORTB,14);
Gpio PB15(GPIOB, PORTB,15);
Gpio PB16(GPIOB, PORTB,16);
Gpio PB17(GPIOB, PORTB,17);
Gpio PB18(GPIOB, PORTB,18);
Gpio PB19(GPIOB, PORTB,19);
Gpio PB20(GPIOB, PORTB,20);
Gpio PB21(GPIOB, PORTB,21);
Gpio PB22(GPIOB, PORTB,22);
Gpio PB23(GPIOB, PORTB,23);
Gpio PB24(GPIOB, PORTB,24);
Gpio PB25(GPIOB, PORTB,25);

Gpio PC0(GPIOC, PORTC,0);
Gpio PC1(GPIOC, PORTC,1);
Gpio PC2(GPIOC, PORTC,2);
Gpio PC3(GPIOC, PORTC,3);
Gpio PC4(GPIOC, PORTC,4);
Gpio PC5(GPIOC, PORTC,5);
Gpio PC6(GPIOC, PORTC,6);
Gpio PC7(GPIOC, PORTC,7);
Gpio PC8(GPIOC, PORTC,8);
Gpio PC9(GPIOC, PORTC,9);
Gpio PC10(GPIOC, PORTC,10);
Gpio PC11(GPIOC, PORTC,11);
Gpio PC12(GPIOC, PORTC,12);
Gpio PC13(GPIOC, PORTC,13);
Gpio PC14(GPIOC, PORTC,14);
Gpio PC15(GPIOC, PORTC,15);
Gpio PC16(GPIOC, PORTC,16);
Gpio PC17(GPIOC, PORTC,17);
Gpio PC18(GPIOC, PORTC,18);
Gpio PC19(GPIOC, PORTC,19);
Gpio PC20(GPIOC, PORTC,20);
Gpio PC21(GPIOC, PORTC,21);
Gpio PC22(GPIOC, PORTC,22);
Gpio PC23(GPIOC, PORTC,23);
Gpio PC24(GPIOC, PORTC,24);
Gpio PC25(GPIOC, PORTC,25);

Gpio PD0(GPIOD, PORTD,0);
Gpio PD1(GPIOD, PORTD,1);
Gpio PD2(GPIOD, PORTD,2);
Gpio PD3(GPIOD, PORTD,3);
Gpio PD4(GPIOD, PORTD,4);
Gpio PD5(GPIOD, PORTD,5);
Gpio PD6(GPIOD, PORTD,6);
Gpio PD7(GPIOD, PORTD,7);
Gpio PD8(GPIOD, PORTD,8);
Gpio PD9(GPIOD, PORTD,9);
Gpio PD10(GPIOD, PORTD,10);
Gpio PD11(GPIOD, PORTD,11);
Gpio PD12(GPIOD, PORTD,12);
Gpio PD13(GPIOD, PORTD,13);
Gpio PD14(GPIOD, PORTD,14);
Gpio PD15(GPIOD, PORTD,15);
Gpio PD16(GPIOD, PORTD,16);
Gpio PD17(GPIOD, PORTD,17);
Gpio PD18(GPIOD, PORTD,18);
Gpio PD19(GPIOD, PORTD,19);
Gpio PD20(GPIOD, PORTD,20);
Gpio PD21(GPIOD, PORTD,21);
Gpio PD22(GPIOD, PORTD,22);
Gpio PD23(GPIOD, PORTD,23);
Gpio PD24(GPIOD, PORTD,24);
Gpio PD25(GPIOD, PORTD,25);

Gpio PE0(GPIOE, PORTE,0);
Gpio PE1(GPIOE, PORTE,1);

Uart uart0(UART0,&PA2,&PA0);
//Uart uart0(UART0,&PC4,&PC5);
//Uart uart0(UART0,&PC4,&PC5);

Uart uart1(UART1,&PE0,&PE1);
//Uart uart1(UART1,&PC4,&PC5);

