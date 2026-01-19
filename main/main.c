#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include <math.h>

#define DELAY_MS 500

void app_main(void)
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   
    int n_evens = 0;        // Number of evens
    int n_odds = 0;         // Number of odds
    int i;                  // Loop index
   
    for (
        i = 0;
        i < 10;
        i++
    ) {
       
        if (x[i] % 2 == 0){
            n_evens++;
        } else {
            n_odds++;
        }
       
    }
   
    printf("Number of evens = %d\nNumber of odds = %d\n", n_evens, n_odds);
}
