
#ifndef HTS221_H
#define HTS221_H

int32_t HTS221_Init(void *);
int32_t HTS221_Read_Temperature(float *);
int32_t HTS221_Read_Humidity(float *);

#endif
