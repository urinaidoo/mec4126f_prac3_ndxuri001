// Description----------------------------------------------------------------|
/*
 * 
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>
#include <string.h>

// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data {
	uint8_t day; // date of month
	uint8_t month; // month number
	uint16_t year; // year of birth
	uint8_t age; // current age
};

struct age_data my_age; // global variable of struct 

// FUNCTION DECLARATIONS -----------------------------------------------------|


// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	init_LCD();
	// instance of struct with personal birth date details created:
	my_age.day = 17; 
	my_age.month = 11;
	my_age.year = 2001;
	my_age.age = 21;
	char str[2];


	while(1)
	{ 
		// looped counter on LCD screen of my age
		int i;
		int age_int = my_age.age;
		for(i = 0;i<=age_int;++i){
		sprintf(str,"%d",i);
		lcd_putstring(str);
		delay(65000);
		lcd_command(CLEAR);
		delay(65000);


	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|




