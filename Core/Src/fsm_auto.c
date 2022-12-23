/*
 * clock_auto.c
 *
 *  Created on: Nov 24, 2022
 *      Author: Admin
 */

#include "clock_auto.h"

void clock_auto_run(){
	if(mode == NORMAL){
		switch(stat){
		case INIT:
			stat = RUN;
			setTimer1(10);
			break;
		case RUN:
			if(timer1_flag == 1){
				if(Second_count == SECOND_COUNT){
					Second_count = INITIAL_STATE;
					Minute_count++;
				}

				if(Minute_count == MINUTE_COUNT){
					Minute_count = INITIAL_STATE;
					Hour_count++;
				}

				if(Hour_count == HOUR_COUNT) Hour_count = INITIAL_STATE;

				clear_All_Clock();
				//set_Number_on_Clock(Second_count);
				set_Number_on_Clock(Second_count/5);
				set_Number_on_Clock(Minute_count/5);
				set_Number_on_Clock(Hour_count);

				Second_count++;
				setTimer1(50);
			}
			break;
		default:
			break;
		}

		switch(mode){
		case NORMAL:
			if (isButtonPressed(BUTTON1) == 1) mode = SEC_CHANGE;
			break;
		case SEC_CHANGE:
			if (isButtonPressed(BUTTON1) == 1) mode = MIN_CHANGE;
			break;
		case MIN_CHANGE:
			if (isButtonPressed(BUTTON1) == 1) mode = HOUR_CHANGE;
			break;
		case HOUR_CHANGE:
			if (isButtonPressed(BUTTON1) == 1) mode = NORMAL;
			break;
		default:
			break;
		}
	}
}


