#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Anasi Nikitha ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-06-14
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PB0)   /**< LED Pin number  */

#define HEATER_OCCUPANCY_PORT (PORTD) /**< HEATER_OCCUPANCY Port Number */
#define HEATER_OCCUPANCY_PIN (PIND) /**< HRATER_OCCUPANCY Pin number  */
#define HEARTER_PIN (PD0)/**< HEATER Pin number  */
#define OCCUPANCY_PIN (PD4)/**< OCCUPANCY Pin number  */
#define CRO_DISPLAY_PIN (PD6)/**< CRO DISPLAY PIN OUTPUT PIN FOR PWM */

#define ADC_MUX_REGISTER (ADMUX)/**< ADC MULTIPLEXER REGISTER  */
#define ADC_CONTROL_STATUS_REGISTER (ADCSRA)/**< ADC CONTROL AND STATUS REGISTER  */
#define ADC_REF_VOLTAGE (REFS0)/**< ADC REFERENCE VOLTAGE BIT  */
#define ADC_ENABLE (ADEN)/**< ADC ENABLE BIT  */
#define ADC_PRESCALER (ADPS0)/**< ADC PRESCALER BIT  */
#define ADC_START_CONVERSION (ADSC)/**< ADC START CONVERSION BIT  */
#define ADC_INTERUPT_FLAG (ADIF)/**< ADC INTERUPT FLAG BIT  */

#define TIMER_CONTROL_REGISTER_A (TCCR0A)/**< TIMER CONTROL REGISTER A */
#define NON_INVERTING_COMPAIR_MODE (COM0A1)/**<  NON INVERTING MODE */
#define WAVE_GENERATION_MODE_0 (WGM00)/**< NON INVERTING MODE FAST PWM */
#define WAVE_GENERATION_MODE_1 (WGM01)/**< NON INVERTING MODE FAST PWM */
#define TIMER_CONTROL_REGISTER_B (TCCR0B)/**< TIMER CONTROL REGISTER B */
#define PRESCALAR_BIT_0 (CS00)/**< PRESCALAR BIT 0 */
#define PRESCALAR_BIT_1 (CS01)/**< PRESCALAR BIT 1 */
#define OUTPUT_COMPAIR_REGISTER_0A (OCR0A)/**< OUTPUT COMPAIR REGISTER OA */

#define USART_CONTROL_STATUS_REG_0A (UCSR0A)/**< CONTROL AND STATUS REGISTER A */
#define USART_DATA_REG_EMPTY (UDRE0) /**< DATA REGISTER EMPTY */
#define USART_DATA_REG0 (UDR0) /**< USART DATA REGISTER */
#define USART_BAUDRATE_REG_L (UBRR0L) /**< USART BAUDRATE REG LOWER  */
#define USART_BAUDRATE_REG_H (UBRR0H) /**< USART BAUDRATE REG HIGHER */
#define USART_CONTROL_STATUS_REG_0B (UCSR0B) /**< CONTROL AND STATUS REGISTER B */
#define USART_CONTROL_STATUS_REG_0C (UCSR0C) /**< CONTROL AND STATUS REGISTER C */
#define RECEIVER_COMPLETE_INTERUPT_ENABLE (RXCIE0) /**< RECEIVER COMPLETE INTERUPT ENABLE */
#define TRANSMITTER_COMPLETE_INTERUPT_ENABLE (TXCIE0) /**< TRANSMISSION COMPLETE INTERUPT ENABLE */
#define RECEIVER_ENABLE (RXEN0) /**< RECEIVER ENABLE */
#define TRANSMITTER_ENABLE (TXEN0)  /**< TRANSMITTER ENABLE */
#define USART_MODE_SELECT (UMSEL00) /**< USART MODE SELECT BIT 0 */
#define USART_DATA_CHAR_SIZE_BIT0 (UCSZ01) /**< DATA SIZE */
#define USART_DATA_CHAR_SIZE_BIT1 (UCSZ00) /**< DATA SIZE */
#define USART_RECEIVE_COMPLETE (RXC0) /**< USART RECEIVER COMPLETE */


#endif /* __PROJECT_CONFIG_H__ */
