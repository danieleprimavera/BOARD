
#include "hts221.h"

int32_t HTS221_Init(void *handle) { return 0; }
int32_t HTS221_Read_Temperature(float *val) { *val = 25.0f; return 0; }
int32_t HTS221_Read_Humidity(float *val) { *val = 50.0f; return 0; }
