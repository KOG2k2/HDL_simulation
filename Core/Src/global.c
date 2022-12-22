/*
 * global.c
 *
 *  Created on: Dec 22, 2022
 *      Author: Admin
 */

#include "global.h"

/***********Clock Auto************/

int Second_count = INITIAL_STATE;
int Minute_count = INITIAL_STATE;
int Hour_count = INITIAL_STATE;

int mode = NORMAL;

/***********Led Display************/

int leds[NUM_OF_LED] = {RED12_Pin, RED1_Pin, RED2_Pin, RED3_Pin, RED4_Pin, RED5_Pin, RED6_Pin, RED7_Pin, RED8_Pin, RED9_Pin, RED10_Pin, RED11_Pin};

/***********Clock Manual************/

int Stat_M2_1 = 0;
