
#include "main.h"
#include "b_l475e_iot01_env_sensors.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    BSP_ENV_SENSOR_Init(0, ENV_TEMPERATURE | ENV_HUMIDITY);

    while (1)
    {
        float temp = 0.0f, hum = 0.0f;
        BSP_ENV_SENSOR_GetValue(0, ENV_TEMPERATURE, &temp);
        BSP_ENV_SENSOR_GetValue(0, ENV_HUMIDITY, &hum);
        HAL_Delay(1000);
    }
}
