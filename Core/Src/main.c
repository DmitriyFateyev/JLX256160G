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
static void set_angle(void * obj, int32_t v)
{
    lv_arc_set_value((lv_obj_t *)obj, v);
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
    
    //lv_example_industrial_monitor();
    
    /*
    lv_obj_t *table = lv_table_create(lv_screen_active());
    // Заполняем ячейки
    lv_table_set_cell_value(table, 0, 0, "FREQUENCY:");
    lv_table_set_cell_value(table, 0, 1, "50.0 Hz");

    lv_table_set_cell_value(table, 1, 0, "VOLTAGE:");
    lv_table_set_cell_value(table, 1, 1, "380 V");

    lv_table_set_cell_value(table, 2, 0, "CURRENT:");
    lv_table_set_cell_value(table, 2, 1, "17.5 A");

    lv_table_set_cell_value(table, 3, 0, "POWER:");
    lv_table_set_cell_value(table, 3, 1, "12.7 kVt");

    // Ширина колонок
    lv_table_set_col_width(table, 0, 120);
    lv_table_set_col_width(table, 1, 100);
    lv_obj_align(table, LV_ALIGN_TOP_LEFT, 0, 0);
    */
    
//    lv_obj_t *label1 = lv_label_create(lv_screen_active());
//    lv_obj_set_style_text_font(label1, &ui_font_8, 0);
    //lv_label_set_text(label1, "FREQUENCY: 50.0 Hz\nVOLTAGE: 380 V\nCURRENT: 17.5 A\nPOWER: 12.7 kVt\n");    
//    lv_label_set_text_fmt(label1,  "%-11s%.1f Hz\n%-11s%d V\n%-11s%.1f A\n%-11s%.2f kVt\n",
//        "FREQUENCY:", 50.0f,
//        "VOLTAGE:",   380,
//        "CURRENT:",   17.5f,
//        "POWER:",     12.7f
//    );
    
    //lv_label_set_text(label1, buf);
    //lv_obj_align(label1, LV_ALIGN_TOP_LEFT, 5, 5);
    
    lv_obj_t * label = lv_label_create(lv_screen_active());
    lv_obj_set_style_text_font(label, &ui_font_12, 0);
    //lv_label_set_text(label, "Hello LVGL!");
    lv_label_set_text(label,
    "EN: Station Status OK\n1234567890\n25.6°C\n"
    "RU: Состояние станции\n"
    "AZ: Stansiya vəziyyəti\n"
    "Ə ə Ğ ğ İ ı Ö ö Ş ş Ü ü Ç ç"
);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    
    /*
    lcd.hspi = &hspi1;
    lcd.cs_port = GPIOA;  lcd.cs_pin = GPIO_PIN_4;
    lcd.a0_port = GPIOA;  lcd.a0_pin = GPIO_PIN_0;
    lcd.rst_port= GPIOA;  lcd.rst_pin= GPIO_PIN_1;    
    st75256_init(&lcd);    
    memset(fb, 0, 5120);
    
    fb_draw_parallelogram(fb,
    30, 10,    // верх-лево
    220, 30,   // верх-право
    180, 120,   // низ-право
    20,  100     // низ-лево
);
    st75256_write_fb(&lcd, fb);
    */
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
