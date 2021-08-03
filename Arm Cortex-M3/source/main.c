#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"

            u32 const OSAMA = 9 ; //GLOBAL FLAG TO TEST

int main (void){


		      RCC_voidInitSysClock(); //Enable External Clock
			 
		      RCC_voidEnableClock(RCC_APB2,2); //Enable APB2 bus Clock to PORTA

			  GPIO_VoidSetPinDirection(GPIOA,8,OUTPUT_2MHZ_PP); // config A8 as output

			  GPIO_VoidSetPinValue(GPIOA,8,GPIO_HIGH); // set A8 as high

		while(1){
			
		      			 

}
}



