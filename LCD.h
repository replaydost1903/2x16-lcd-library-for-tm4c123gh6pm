#ifndef LCD_H_
#define LCD_H_



#include "stdbool.h"
#include "stdint.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "inc/hw_memmap.h"
#include "DELAY.h"


/*LCD Command Definitions*/
#define I_D_SET           (0x1<<1)                      /* Her yazma i�leminden sonra kurs�r pozisyonunu artt�r */
#define I_D_RESET         (0x0<<1)                      /* Her yazma i�leminden sonra kurs�r pozisyonunu azalt  */
#define S_SET             (0x1<<0)                      /* Ekran kayd�rma modu a��k                             */
#define S_RESET           (0x0<<0)                      /* Ekran kayd�rma modu kapal�                           */
#define D_SET             (0x1<<2)                      /* Ekran a��k                                           */
#define D_RESET           (0x0<<2)                      /* Ekran kapal�                                         */
#define C_SET             (0x1<<1)                      /* Kurs�r a��k                                          */
#define C_RESET           (0x0<<1)                      /* Kurs�r kapal�                                        */
#define B_SET             (0x1<<0)                      /* Kurs�r blink a��k                                    */
#define B_RESET           (0x0<<0)                      /* Kurs�r blink kapal�                                  */
#define S_C_SET           (0x1<<3)                      /* Kurs�r kayd�r                                        */
#define S_C_RESET         (0x0<<3)                      /* Kurs�r ta��nmas� gerekir. Manuel.                    */
#define R_L_SET           (0x1<<2)                      /* Sa�a kayd�r                                          */
#define R_L_RESET         (0x0<<2)                      /* Sola kayd�r                                          */
#define D_L_SET           (0x1<<4)                      /* Veri hatt� 8 bit                                     */
#define D_L_RESET         (0x0<<4)                      /* Veri hatt� 4 bit                                     */
#define N_SET             (0x1<<3)                      /* 2 sat�r                                              */
#define N_RESET           (0x0<<3)                      /* 1 sat�r                                              */
#define F_SET             (0x1<<2)                      /* 5x10 pixel                                           */
#define F_RESET           (0x0<<2)                      /* 5x7 pixel                                            */



/*Port Defines*/
#define LCDPORT     GPIO_PORTB_BASE
#define RS          GPIO_PIN_0
#define E           GPIO_PIN_1
#define DB4         GPIO_PIN_4
#define DB5         GPIO_PIN_5
#define DB6         GPIO_PIN_6
#define DB7         GPIO_PIN_7





/* LCD Apis*/
void Lcd_Port_Enable(void);
void Lcd_Init(uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t,uint8_t);
void Send_Command(uint8_t);
void Send_Data(uint8_t);
void Clean_Screen(void);
void Cursor_Back_to_Top(void);
void Select_Login_Mode(uint8_t,uint8_t);
void Screen_On_Off(uint8_t,uint8_t,uint8_t);
void Slide_Cursor(uint8_t,uint8_t);
void Select_Function(uint8_t,uint8_t,uint8_t);
void Write_Word_On_the_LCD_Screen_Only_String(char *);
void Write_Word_On_the_LCD_Screen_Only_Array(char *);
void Puts_to_x_y(uint8_t,uint8_t);
void Send_Thirty_Hex(void);
void Write_Clock_Data_to_LCD(uint8_t*,uint8_t*,uint8_t*,uint8_t*,uint8_t*,uint8_t*);


#endif /* LCD_H_ */
