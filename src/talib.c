#include "talib.h"

int initialize(){
  TA_RetCode retCode = TA_Initialize();

  return processTaReturnCode(retCode);
}

int shutdown(){
  TA_RetCode retCode = TA_Shutdown();
  return processTaReturnCode(retCode);
}

int processTaReturnCode(TA_RetCode retCode){
  return (retCode == TA_SUCCESS) ? 1 : 0;
}