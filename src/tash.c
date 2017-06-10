#include "tash.h"

int main(int argc, char** argv)
{
  if(initialize()){
    printf("initialized %s! \n", TA_GetVersionString());
    if(shutdown()){
      printf("shutdown!\n");
    }
  }
  a_func("hello\n");
  return 0;
}