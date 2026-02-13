/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "spi.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include "st75256.h"
#include "st75256_font_8x8.h"
#include "st75256_industrial_16x16.h"
#include "st75256_font_12x16.h" 
//#include "st75256_cyrillic_12x16.h" 
//#include "st75256_compact_6x16.h" 
#include "st75256_bitmap_7x16.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
static st75256_t lcd;
static uint8_t fb[ST75256_FB_SIZE];
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */
    lcd.hspi = &hspi1;
    lcd.cs_port = GPIOA;  lcd.cs_pin = GPIO_PIN_4;   // example
    lcd.a0_port = GPIOA;  lcd.a0_pin = GPIO_PIN_0;   // example
    lcd.rst_port= GPIOA;  lcd.rst_pin= GPIO_PIN_1;    // example

    st75256_init(&lcd);
    
    // 1. Clear Screen
    memset(fb, 0, 5120);
    
    st75256_draw_string_ru(fb, 0, 0, "SYSTEM READY: 12.34V", 7);
    st75256_draw_string_ru(fb, 0, 2, "TEMP: 24.5", 7);
    st75256_draw_string_ru(fb, 0, 4, "PRESSURE: 1013 hPa", 7);
    st75256_draw_string_ru(fb, 0, 6, "BATTERY: [#### ] 80%", 7);
    
//    st75256_draw_string_ru(fb, 0, 0, "СОСТОЯНИЕ СТАНЦИИ", 7);
//    st75256_draw_string_ru(fb, 0, 2, "ПЭД:ВКЛ РУЧНОЙ ПОДДЕРЖАНИЕ ЧАСТОТЫ", 7);
//    st75256_draw_hline(fb, 35);
//    st75256_draw_hline(fb, 36);
    
    

// // Row 0 (pages 0-1): Header
//st75256_draw_string_ru(fb, 0, 0, "СОСТОЯНИЕ СТАНЦИИ", 8);
//st75256_draw_hline(fb, 17);  // single line under header

//// Row 1 (pages 2-3): Status
//st75256_draw_string_ru(fb, 0, 2, "ПЭД:ВКЛ  РУЧНОЙ  ПОДДЕРЖАНИЕ ЧАСТОТЫ", 8);
//st75256_draw_hline(fb, 33);  // double line
//st75256_draw_hline(fb, 35);

//// Row 2 (pages 4-5): Last stop
//st75256_draw_string_ru(fb, 0, 4, "ПОСЛЕДНИЙ ОСТАНОВ: 29/11/24 11:51:29", 8);

//// Row 3 (pages 6-7): Reason
//st75256_draw_string_ru(fb, 0, 6, "ПРИЧИНА: НИЗКОЕ U СЕТИ", 8);

//// Row 4 (pages 8-9): blank / separator
//st75256_draw_hline(fb, 65);
//st75256_draw_hline(fb, 67);

//// Row 5 (pages 8-9): Data
//st75256_draw_string_ru(fb, 0, 8, "U СЕТИ (В) AB/BC/CA  413  414  415", 8);

//// ... more data rows ...

//// Bottom bar (pages 18-19)
//st75256_draw_hline(fb, 145);
//st75256_draw_string_ru(fb, 0, 18, "ВРЕМЯ: 05/02/25 18:19:43 ПОДОГРЕВ:ОТКЛ", 8);

    // Push to display
    st75256_write_fb(&lcd, fb);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
      HAL_Delay(250);
      HAL_GPIO_TogglePin(BLUE_LED_GPIO_Port, BLUE_LED_Pin);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 12;
  RCC_OscInitStruct.PLL.PLLN = 96;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
