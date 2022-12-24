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

		switch(Stat_M2_2){
		case INIT:
			if(isButtonPressed(BUTTON2) == 1){
				Stat_M2_2 = INCREASE;
				Second_count++;
			}

			if (isButtonPressed(BUTTON3)==1){
				Stat_M2_2 = DECREASE;
				Second_count--;
			}
			break;
		case INCREASE:
			if(isButtonPressed(BUTTON2) == 1){
				Second_count++;
			}

			if (isButtonPressed(BUTTON3)==1){
				Second_count--;
				Stat_M2_2 = DECREASE;
			}
			break;
		case DECREASE:
			if (isButtonPressed(BUTTON3)==1){
				Second_count--;
			}
			break;
		default:
			break;
		}

		if(isButtonPressed(BUTTON1) == 1) mode = MIN_CHANGE;
	}

	if(mode == MIN_CHANGE){
			switch(Stat_M3_1){
			case INIT:  //led blink 2Hz
				Stat_M3_1 = BLINK;
				setTimer2(10);
				break;
			case BLINK:
				if(timer2_flag == 1){
					//clear_All_Clock();
					toggleNumberOnClock(Minute_count / 5);
					setTimer2(50);
				}
				break;
			default:
				break;
			}

			switch(Stat_M3_2){
			case INIT:
				if(isButtonPressed(BUTTON2) == 1){
					Stat_M3_2 = INCREASE;
					Second_count++;
				}

				if (isButtonPressed(BUTTON3)==1){
					Stat_M3_2 = DECREASE;
					Second_count--;
				}
				break;
			case INCREASE:
				if(isButtonPressed(BUTTON2) == 1){
					Second_count++;
				}

				if (isButtonPressed(BUTTON3)==1){
					Second_count--;
					Stat_M3_2 = DECREASE;
				}
				break;
			case DECREASE:
				if (isButtonPressed(BUTTON3)==1){
					Second_count--;
				}
				break;
			default:
				break;
			}

			if(isButtonPressed(BUTTON1) == 1) mode = HOUR_CHANGE;
		}

	if(mode == HOUR_CHANGE){
			switch(Stat_M4_1){
			case INIT:  //led blink 2Hz
				Stat_M4_1 = BLINK;
				setTimer2(10);
				break;
			case BLINK:
				if(timer2_flag == 1){
					//clear_All_Clock();
					toggleNumberOnClock(Hour_count / 5);
					setTimer2(50);
				}
				break;
			default:
				break;
			}

			switch(Stat_M4_2){
			case INIT:
				if(isButtonPressed(BUTTON2) == 1){
					Stat_M4_2 = INCREASE;
					Second_count++;
				}

				if (isButtonPressed(BUTTON3)==1){
					Stat_M4_2 = DECREASE;
					Second_count--;
				}
				break;
			case INCREASE:
				if(isButtonPressed(BUTTON2) == 1){
					Second_count++;
				}

				if (isButtonPressed(BUTTON3)==1){
					Second_count--;
					Stat_M4_2 = DECREASE;
				}
				break;
			case DECREASE:
				if (isButtonPressed(BUTTON3)==1){
					Second_count--;
				}
				break;
			default:
				break;
			}

			if(isButtonPressed(BUTTON1) == 1){
				reInit();
			}
		}
}
