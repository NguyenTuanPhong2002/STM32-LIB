/*
 * rs485.c
 *
 *  Created on: Nov 1, 2023
 *      Author: NTPhong
 *      gmail: ntphong011102@gmail.com
 */

#include "rs485.h"

extern UART_HandleTypeDef huart3;

static inline void EWG_enableTransmitMode()
{

    HAL_GPIO_WritePin(DE_GPIO, GPIO_PIN_SET);
    HAL_GPIO_WritePin(RE_GPIO, GPIO_PIN_SET);
}

static inline void EWG_enableReciveMode()
{

    HAL_GPIO_WritePin(DE_GPIO, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(RE_GPIO, GPIO_PIN_RESET);
}

static inline void EWG_shutdownMode()
{

    HAL_GPIO_WritePin(RE_GPIO, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DE_GPIO, GPIO_PIN_SET);
}

static inline void EWG_powerEnable()
{

    HAL_GPIO_WritePin(POWER_GPIO, GPIO_PIN_SET);
    HAL_Delay(3000);
}

static inline void EWG_powerDisable()
{

    HAL_GPIO_WritePin(POWER_GPIO, GPIO_PIN_RESET);
}

