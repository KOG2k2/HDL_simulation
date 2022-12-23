/*
 * global.h
 *
 *  Created on: Dec 22, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "led_disp.h"
#include "software_timer.h"
#include "main.h"
#include "button.h"

/***********Clock Auto************/

#define INITIAL_STATE 0

#define SECOND_COUNT 60
#define MINUTE_COUNT 60
#define HOUR_COUNT 12

#define NORMAL 0
#define SEC_CHANGE 1
#define MIN_CHANGE 2
#define HOUR_CHANGE 3

#define INIT 0
#define RUN 1

extern int Second_count;
extern int Minute_count;
extern int Hour_count;

extern int mode;

extern int stat;

void Setup();

/***********Led Display************/

#define NUM_OF_LED 12

extern int leds[12];

#define ON RESET
#define OFF SET

/***********Clock Manual************/

#define BLINK 1

extern int Stat_M2_1;

/***********Buttons************/
#define BUTTON1 0
#define BUTTON2 1
#define BUTTON3 2

#endif /* INC_GLOBAL_H_ */
