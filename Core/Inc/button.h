/*
 * button.h
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define NUM_OF_BUTTON 3

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButtonPressed(int index);

void subKeyProcess(int index);

void getKeyInput();

#endif /* INC_BUTTON_H_ */
