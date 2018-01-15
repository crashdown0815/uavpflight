/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
	DEF_TIM(TIM3,  CH1, PA2,  TIM_USE_PPM,   TIMER_INPUT_ENABLED,   0), // PPM_IN_A
	DEF_TIM(TIM3,  CH1, PA3,  TIM_USE_PPM,   TIMER_INPUT_ENABLED,   0), // PPM_IN_B

	DEF_TIM(TIM3,  CH3, PA8,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_A
	DEF_TIM(TIM1,  CH4, PE11, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_B
	DEF_TIM(TIM1,  CH4, PE13, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_C
	DEF_TIM(TIM1,  CH3, PE14, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_D
    DEF_TIM(TIM3,  CH3, PB5,  TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_E
    DEF_TIM(TIM4,  CH4, PB13, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_F
    DEF_TIM(TIM4,  CH4, PB14, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_G
    DEF_TIM(TIM4,  CH3, PB15, TIM_USE_MOTOR, TIMER_OUTPUT_STANDARD, 0), // PPM_OUT_H
};
