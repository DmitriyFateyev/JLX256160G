/**
  ******************************************************************************
  * @file           : st75256.h
  * @brief          : Header for st75256.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ST75256_TEST_H
#define __ST75256_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

void st75256_test_lcdic_pattern(st75256_t *lcd);

#ifdef __cplusplus
}
#endif

#endif /* __ST75256_TEST_H */
