// INI file handler (ini_handler.h)
#pragma once

#include <stdint.h>
#include "ini.h"

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus
uint8_t ini_save_file(const char *ini_save_str);
uint8_t ini_load_file(void *user_struct);

#ifdef __cplusplus
} // extern "C"
#endif //__cplusplus
