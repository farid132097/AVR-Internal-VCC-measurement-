#include <avr/io.h>
#include <util/delay.h>
#include "DFU_OTA.h"

int main(void){

OTA_init();
OTA_print_text("AVR VCC measurement using Bandgap\n");
while(1){		
		   OTA_print_text("VCC: ");
		   OTA_print_number(VCC(),1);  
		   OTA_print_text("  SUPPLY: ");
		   OTA_print_number(SUPPLY()/24.0,1); 
		   OTA_print_text("\n");
		   _delay_ms(1500);
		  
		  }
}
