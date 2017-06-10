#ifndef TALIB_H
#define TALIB_H 1
#include <ta_libc.h>

int initialize();
int shutdown();
int processTaReturnCode(TA_RetCode retCode);

#endif