/*
 * global.c
 *
 *  Created on: Dec 22, 2022
 *      Author: Admin
 */

#include "global.h"

/***********Clock Manual************/

int Stat_M2_1 = INIT;

/***********Clock Auto************/
int Second_count = 0;
int Minute_count = 0;
int Hour_count = 0;

int mode = 0;

int stat = 0;

void Setup(){
	Second_count = INITIAL_STATE;
	Minute_count = INITIAL_STATE;
	Hour_count = INITIAL_STATE;

	mode = NORMAL;

	Stat_M2_1 = INIT;
}

/***********Led Display************/

int leds[NUM_OF_LED] = {RED12_Pin, RED1_Pin, RED2_Pin, RED3_Pin, RED4_Pin, RED5_Pin, RED6_Pin, RED7_Pin, RED8_Pin, RED9_Pin, RED10_Pin, RED11_Pin};
