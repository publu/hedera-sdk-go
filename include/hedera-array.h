#pragma once

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    void* ptr;
    size_t len;
} HederaArray;

#ifdef __cplusplus
}
#endif
