/***********************************************************************
#   > File Name   : main.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-05-19 21:10:06
***********************************************************************/

#include <iostream>
#include <ucontext.h>
#include <unistd.h>

int main(int argc, const char **argv) {
  ucontext_t context;
  getcontext(&context);
  std::cout << "hello" << std::endl;
  sleep(1);
  setcontext(&context);

  return 0;
}
