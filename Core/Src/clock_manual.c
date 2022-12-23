/*
 * clock_manual.c
 *
 *  Created on: Dec 3, 2022
 *      Author: Admin
 */

#include "clock_manual.h"

void fsm_manual_run(){
	if(mode == SEC_CHANGE){
		switch(Stat_M2_1){
		case INIT:  //led blink 2Hz
			Stat_M2_1 = BLINK;
			setTimer2(10);
			break;
		case BLINK:
			if(timer2_flag == 1){
				//clear_All_Clock();
				toggleNumberOnClock(Second_count / 5);
				setTimer2(50);
			}
			break;
		default:
			break;
		}
	}
}
