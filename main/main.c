#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

static const char *TAG = "Streetlight";

// Standard onboard LED on most ESP32 boards is GPIO 2
#define BLINK_GPIO GPIO_NUM_2

void app_main(void)
{
    ESP_LOGI(TAG, "ESP32 Streetlight Project initialized!");

    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    int state = 0;
    while (1) {
        state = !state;
        gpio_set_level(BLINK_GPIO, state);
        ESP_LOGI(TAG, "Streetlight state: %s", state ? "ON" : "OFF");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
