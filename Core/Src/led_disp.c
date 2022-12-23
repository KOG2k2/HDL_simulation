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
			HAL_GPIO_TogglePin(RED12_GPIO_Port, RED12_Pin);
			break;
		case 1:
			HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(RED3_GPIO_Port, RED3_Pin);
			break;
		case 4:
			HAL_GPIO_TogglePin(RED4_GPIO_Port, RED4_Pin);
			break;
		case 5:
			HAL_GPIO_TogglePin(RED5_GPIO_Port, RED5_Pin);
			break;
		case 6:
			HAL_GPIO_TogglePin(RED6_GPIO_Port, RED6_Pin);
			break;
		case 7:
			HAL_GPIO_TogglePin(RED7_GPIO_Port, RED7_Pin);
			break;
		case 8:
			HAL_GPIO_TogglePin(RED8_GPIO_Port, RED8_Pin);
			break;
		case 9:
			HAL_GPIO_TogglePin(RED9_GPIO_Port, RED9_Pin);
			break;
		case 10:
			HAL_GPIO_TogglePin(RED10_GPIO_Port, RED10_Pin);
			break;
		case 11:
			HAL_GPIO_TogglePin(RED11_GPIO_Port, RED11_Pin);
			break;
		default:
			break;
	}
}
