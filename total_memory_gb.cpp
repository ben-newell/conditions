#include <iostream>
int main() {
  int cmd = system("/usr/sbin/sysctl hw.memsize");
  std::cout << cmd << std::endl;
  return 0; }
