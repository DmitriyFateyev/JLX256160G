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
#include <stdio.h>
#include "st75256.h"
#include "lvgl/lvgl.h"
#include "lv_port_disp.h"
/* USER CODE END Includes */
/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

// Тест: рисуем букву "A" 8x16 через ваш draw_pixel
void test_draw_char_A(uint8_t *fb, int x0, int y0) {
    // Горизонтальный битмап буквы "A" (16 строк x 8 бит, MSB слева)
    const uint8_t bmp[] = {
        0x00, // ........
        0x18, // ...##...
        0x18, // ...##...
        0x24, // ..#..#..
        0x24, // ..#..#..
        0x42, // .#....#.
        0x42, // .#....#.
        0x7E, // .######.
        0x42, // .#....#.
        0x42, // .#....#.
        0x42, // .#....#.
        0x42, // .#....#.
        0x00, // ........
        0x00, // ........
        0x00, // ........
        0x00, // ........
    };

    for (int row = 0; row < 16; row++) {
        for (int col = 0; col < 8; col++) {
            uint8_t on = (bmp[row] >> (7 - col)) & 1;
            st75256_draw_pixel(fb, x0 + col, y0 + row, on);
        }
    }
}

// Тест: рисуем цифру "1" 8x16
void test_draw_char_1(uint8_t *fb, int x0, int y0) {
    const uint8_t bmp[] = {
        0x00, // ........
        0x18, // ...##...
        0x38, // ..###...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x18, // ...##...
        0x7E, // .######.
        0x00, // ........
        0x00, // ........
        0x00, // ........
        0x00, // ........
    };

    for (int row = 0; row < 16; row++) {
        for (int col = 0; col < 8; col++) {
            uint8_t on = (bmp[row] >> (7 - col)) & 1;
            st75256_draw_pixel(fb, x0 + col, y0 + row, on);
        }
    }
}

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
extern void lv_example_industrial_monitor(void);
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
    lv_port_disp_init();    // Initialise the display drivers

    lv_obj_t *table = lv_table_create(lv_screen_active());
    lv_obj_set_style_text_font(table, &ui_font_terminus_12, 0);
    
    lv_table_set_cell_value(table, 0, 0, "FREQUENCY(Hs)");
    lv_table_set_cell_value(table, 0, 1, "48.1");
    lv_table_set_cell_value(table, 1, 0, "VOLTAGE(V)");
    lv_table_set_cell_value(table, 1, 1, "375");
    lv_table_set_cell_value(table, 2, 0, "CURRENT(A)");
    lv_table_set_cell_value(table, 2, 1, "17.5 (max:31.8)");
    lv_table_set_cell_value(table, 3, 0, "POWER(kVt)");
    lv_table_set_cell_value(table, 3, 1, "11.6 (max:29.4)");
    lv_table_set_cell_value(table, 4, 0, "STROKES");
    lv_table_set_cell_value(table, 4, 1, "7.92  SPM");
    lv_table_set_cell_value(table, 5, 0, "RUNNING");
    lv_table_set_cell_value(table, 5, 1, "14 d 21 h");
    lv_table_set_cell_value(table, 6, 0, "SIGNAL(dBm)");
    lv_table_set_cell_value(table, 6, 1, "64");

    // Ширина колонок
    lv_table_set_col_width(table, 0, 100);
    lv_table_set_col_width(table, 1, 155);
    lv_obj_align(table, LV_ALIGN_TOP_LEFT, 0, 0);
  /* USER CODE END 2 */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  HAL_Delay(5);
      lv_timer_handler();
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
