#include <iostream>

#include "timer.hpp"

int main() {
  TIMER_START(timer, tmr::nanosecond_t);

  for (int i = 0; i < 10'000'000; ++i) {
  }
  std::cout << TIMER_GET(timer) << '\n';

  return 0;
}