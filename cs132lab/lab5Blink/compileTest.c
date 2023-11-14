#include "libopencm3/stm32/rcc.h"   //Needed to enable clocks for particular GPIO ports
#include "libopencm3/stm32/gpio.h"  //Needed to define things on the GPIO


int main(void) {
    rcc_periph_clock_enable(RCC_GPIOA);
 
    gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO5);            //GPIO Port Name, GPIO Mode, GPIO Push Up Pull Down Mode, GPIO Pin Number
    gpio_set_output_options(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_100MHZ, GPIO5);   //GPIO Port Name, GPIO Pin Driver Type, GPIO Pin Speed, GPIO Pin Number
    
    gpio_set(GPIOA, GPIO5);     //Sets A5
    gpio_clear(GPIOA, GPIO5);   //Clears A5
    while (true){
        gpio_toggle(GPIOA, GPIO5);  //Toggles A5
        for (volatile unsigned int tmr=1e6; tmr > 0; tmr--);
    }

    return 0;
}