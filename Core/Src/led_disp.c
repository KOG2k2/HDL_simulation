/*
 * led_disp.c
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#include "led_disp.h"

void clear_All_Clock(){
	HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
}

void toggleAllClock(){
	HAL_GPIO_TogglePin(GPIOA, leds[0]);
	HAL_GPIO_TogglePin(GPIOA, leds[1]);
	HAL_GPIO_TogglePin(GPIOA, leds[2]);
	HAL_GPIO_TogglePin(GPIOA, leds[3]);
	HAL_GPIO_TogglePin(GPIOA, leds[4]);
	HAL_GPIO_TogglePin(GPIOA, leds[5]);
	HAL_GPIO_TogglePin(GPIOA, leds[6]);
	HAL_GPIO_TogglePin(GPIOA, leds[7]);
	HAL_GPIO_TogglePin(GPIOA, leds[8]);
	HAL_GPIO_TogglePin(GPIOA, leds[9]);
	HAL_GPIO_TogglePin(GPIOA, leds[10]);
	HAL_GPIO_TogglePin(GPIOA, leds[11]);
}

void set_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], RESET);
}

void toggleNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_TogglePin(GPIOA, leds[0]);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[1]);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[2]);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[3]);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[4]);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[5]);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[6]);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[7]);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[8]);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[9]);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[10]);
			HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
			HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
			HAL_GPIO_TogglePin(GPIOA, leds[11]);
			break;
		default:
			break;
	}
}
