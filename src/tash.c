#include "tash.h"

int main(int argc, char** argv)
{
  if(initialize()){
    printf("initialized!\n");
    if(shutdown()){
      printf("shutdown!\n");
    }
  }
  a_func("hello\n");
  return 0;
}