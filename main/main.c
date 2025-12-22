#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN  10 
#define DELAY_MS 00

void app_main(void)
{
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    int counter = 0;

    while (1) {
        printf("Toggling LED... Counter = %d\n", counter);

        if (counter % 2 == 0)
            gpio_set_level(LED_PIN, 1);
        else
            gpio_set_level(LED_PIN, 0);

        // Intentional bug: counter not incremented
         counter++;

        vTaskDelay(DELAY_MS / portTICK_PERIOD_MS);
    }
}

