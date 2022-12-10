#include <atmel_start.h>
//#include "kiss_fft.h"
/*
struct timer_descriptor TIMER_0;

static void TIMER_0_init(void) {
    hri_mclk_set_APBAMASK_YC0_bit(MCLK);
    hri_gclk_write_PCHCTRL_reg(GLCK, TC0_GCLK_ID, CONF GCLK_TC0_SRC | (1 << GCLK_PCHCTRL_CHEN_Pos));
    
    timer_init(&TIMER_0, TC0, _tc_get_timer());
}

void ADC_0_CLOCK_init(void) {
    hri_mclk_set_APBDMASK_ADC0_bit(MCLK);
    hri_gclk_write_PCHCTRL_red(GCLK, ADC0_GCLK_ID, CONF_GCLK_ADC0_SRC | (1 << GCLK_PCHCTRL_CHEN_Pos));
}
*/

float mBuffer[1024];

int main(void){
	//Kiss mFft;
	//float mBuffer[1024];
	//mFft.setData(mBuffer);
	//float * mData = mFft.getAmplitude();	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

        gpio_set_pin_level(PIN_PC8, false);
        gpio_set_pin_direction(PIN_PC8, GPIO_DIRECTION_OUT); // set pin direction to output 

	int adc_val;
	//kiss_fft_cfg cfg = kiss_fft_alloc(nfft,is_inverse_fft ,0,0 );
	/* Replace with your application code */
	while(1){
		for(int i =0; i<=1024; i++){	
	    		adc_sync_read_channel(&ADC_0, 0,&adc_val,4);
	    		mbuffer[i] = adc_val;
			printf("%d\n",adc_val);
		}
		//kiss_fft(cfg,cx_in,cx_out);
	}
	//fft
	//inverse fft
	//dac
	//printf(cx_out.real);
}
