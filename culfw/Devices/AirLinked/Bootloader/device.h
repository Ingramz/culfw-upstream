#ifndef DEVICE_H
#define DEVICE_H

#define DEVICE_CSM 1
#define DEVICE_RWE_PSS 2

#if DEVICE_ID == DEVICE_CSM
#include "../board.h.CSM"
#elif DEVICE_ID == DEVICE_RWE_PSS
#include "../board.h.RWE_PSS"
#else
#error "Device not set"
#endif

#endif
