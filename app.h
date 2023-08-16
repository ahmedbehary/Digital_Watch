/* 
 * File:   app.h
 * Author: Dell
 *
 * Created on 01 ?????, 2023, 04:11 ?
 */

#ifndef APP_H
#define	APP_H
#include "ECU/LED/ecu_led.h"
#include "ECU/PUSH_BUTTON/ecu_button.h"
#include "ECU/RELAY/ecu_relay.h"
#include "ECU/DC_Motor/ecu_dc_motor.h"
#define _XTAL_FREQ 8000000UL
//#define __delay_us(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000000.0)))
//#define __delay_ms(x) _delay((unsigned long)((x)*(_XTAL_FREQ/4000.0)))
//#define __delaywdt_us(x) _delaywdt((unsigned long)((x)*(_XTAL_FREQ/4000000.0)))
//#define __delaywdt_ms(x) _delaywdt((unsigned long)((x)*(_XTAL_FREQ/4000.0)))
#endif	/* APP_H */

 