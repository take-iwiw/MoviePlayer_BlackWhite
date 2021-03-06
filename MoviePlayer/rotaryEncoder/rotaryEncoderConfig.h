/*
 * rotaryEncoderConfig.h
 *
 * Created: 2016-03-09 4:17:34 PM
 *  Author: user
 */ 


#ifndef ROTARYENCODERCONFIG_H_
#define ROTARYENCODERCONFIG_H_

/* io config */
#define ROTARY_ENCODER_A_DDR DDRC
#define ROTARY_ENCODER_B_DDR DDRC
#define ROTARY_ENCODER_A_PORT PORTC
#define ROTARY_ENCODER_B_PORT PORTC
#define ROTARY_ENCODER_A_PIN PINC
#define ROTARY_ENCODER_B_PIN PINC
#define ROTARY_ENCODER_A_BIT 0
#define ROTARY_ENCODER_B_BIT 1

/* operation config */
#define ROTARY_ENCODER_USE_PULLUP
#define ROTARY_ENCODER_CHECK_INTERVAL_MS 5
#define ROTARY_ENCODER_CHECK_CHATTERING_MS 2



#endif /* ROTARYENCODERCONFIG_H_ */