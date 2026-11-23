/*
 * switch.c
 *
 *  Created on: 21-Nov-2026
 *      Author: kashy
 */

#include "switch.h"
uint8_t switch_status_array[DEBOUNCE_COUNT_MAX];
uint8_t switch_status;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	HAL_GPIO_WritePin(TIM_GPIO_Port,TIM_Pin, GPIO_PIN_SET);
	static uint8_t ctr = 0; //Read switch status into next element of array
	switch_status_array[ctr++] = HAL_GPIO_ReadPin(SW1_GPIO_Port, SW1_Pin);
	//If array element above DEBOUNCE_COUNT_MAX, reset it to zero
	if (ctr >= DEBOUNCE_COUNT_MAX) {
		ctr = 0;
	}
	uint8_t status_sum = 0;
	//sum all elements of array
	for(uint8_t i=0; i<DEBOUNCE_COUNT_MAX; i++) {
		status_sum = status_sum + switch_status_array[i];
	}
	//if sum is = to DEBOUNCE_COUNT_MAX, that means all five values are high
	//if sum is = 0, all values are low
	if (status_sum == DEBOUNCE_COUNT_MAX) {
		switch_status = 1;
	}
	else if (status_sum == 0) {
		switch_status = 0;
	}
	HAL_GPIO_WritePin(TIM_GPIO_Port,TIM_Pin, GPIO_PIN_RESET);
}

void checkAndUpdateOuput(void) {
	//HAL_GPIO_WritePin(SL_GPIO_Port,SL_Pin, GPIO_PIN_SET);
	if (switch_status == 1) {
		HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin, GPIO_PIN_RESET);
	}
	else {
		HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin, GPIO_PIN_SET);
}
	//HAL_GPIO_WritePin(SL_GPIO_Port,SL_Pin, GPIO_PIN_RESET);
}
