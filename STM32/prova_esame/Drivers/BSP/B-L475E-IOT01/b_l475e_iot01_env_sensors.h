
#ifndef B_L475E_IOT01_ENV_SENSORS_H
#define B_L475E_IOT01_ENV_SENSORS_H

#define ENV_TEMPERATURE 0x01
#define ENV_HUMIDITY    0x02

int BSP_ENV_SENSOR_Init(uint32_t instance, uint32_t functions);
int BSP_ENV_SENSOR_GetValue(uint32_t instance, uint32_t function, float *value);

#endif
