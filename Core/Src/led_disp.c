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

void setAllClock(){
	HAL_GPIO_WritePin(GPIOA, leds[0], ON);
	HAL_GPIO_WritePin(GPIOA, leds[1], ON);
	HAL_GPIO_WritePin(GPIOA, leds[2], ON);
	HAL_GPIO_WritePin(GPIOA, leds[3], ON);
	HAL_GPIO_WritePin(GPIOA, leds[4], ON);
	HAL_GPIO_WritePin(GPIOA, leds[5], ON);
	HAL_GPIO_WritePin(GPIOA, leds[6], ON);
	HAL_GPIO_WritePin(GPIOA, leds[7], ON);
	HAL_GPIO_WritePin(GPIOA, leds[8], ON);
	HAL_GPIO_WritePin(GPIOA, leds[9], ON);
	HAL_GPIO_WritePin(GPIOA, leds[10], ON);
	HAL_GPIO_WritePin(GPIOA, leds[11], ON);
}

void set_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], RESET);
}

void toggleNumberOnClock(int num){
	HAL_GPIO_TogglePin(GPIOA, leds[num]);
}
