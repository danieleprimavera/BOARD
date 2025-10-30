
#include "b_l475e_iot01_env_sensors.h"
#include "hts221.h"

int BSP_ENV_SENSOR_Init(uint32_t instance, uint32_t functions) {
    return HTS221_Init(NULL);
}

int BSP_ENV_SENSOR_GetValue(uint32_t instance, uint32_t function, float *value) {
    if (function == ENV_TEMPERATURE) return HTS221_Read_Temperature(value);
    if (function == ENV_HUMIDITY) return HTS221_Read_Humidity(value);
    return -1;
}
