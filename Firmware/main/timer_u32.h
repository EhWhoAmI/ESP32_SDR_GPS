//Taken from https://github.com/OliviliK/ESP32_timer_u32

#ifndef _TIMER_U32_H
#define _TIMER_U32_H


#include <esp_timer.h>

#define timer_u32() (esp_timer_get_time())      // TG0_LAC
#define _TICKS_PER_US (1)

__attribute__((always_inline)) static inline float timer_delta_ns(uint32_t tics) {
   return tics * (1000.0 / _TICKS_PER_US);
}

__attribute__((always_inline)) static inline float timer_delta_us(uint32_t tics) {
   return tics * (1.0 / _TICKS_PER_US);
}

__attribute__((always_inline)) static inline float timer_delta_ms(uint32_t tics) {
   return tics * (0.001 / _TICKS_PER_US);
}

__attribute__((always_inline)) static inline float timer_delta_s(uint32_t tics) {
   return tics * (0.000001 / _TICKS_PER_US);
}

#endif
