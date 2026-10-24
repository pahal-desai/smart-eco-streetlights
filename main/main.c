#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

static const char *TAG = "Streetlight";

// Standard onboard LED on most ESP32 boards is GPIO 2
#define BLINK_GPIO GPIO_NUM_2

void app_main(void){
    printf("Serial monitor works\n");
}

